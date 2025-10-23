//-----------------------------------------------103-01.cpp
// ���� ���������� �������� - ��������������� ��������
#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;

class poly{
int n;						// ������� ��������
double *pd;					// ������������ ������ �������������
void load(int n0, double p[]){
	n=n0;					// �������� ����� �������� �������
	pd=new double[n+1];		// - �� ������ ��������� ����������
	for(int i=0;i<=n;i++)
		pd[i]=p[i]; }
void extend(int n1){		// ���������� ����������� ��������
	int i;
	if (n1<=n) return;
	double *pd1=new double[n1+1];
	for (i=0;i<=n;i++) pd1[i]=pd[i];
	for (;i<=n1;i++) pd1[i]=0;
	n=n1;
	delete []pd;			// ������� ������ ������
	pd=pd1;					// ������� ����� �� ������
	}
void normalize(){			// ������������ - �������� ������ 0
	while(n>0 && pd[n]==0) n--;
	}						// ������ �� ������������������
public:
poly(){						// "������" ������� - ������� �������
	n=0;					// � ������� �������������
	pd=new double[1];
	pd[0]=0;}
poly(int m){				// ������� �������� �������
	n=m;					// � �������� ��������������
	pd=new double[n+1];
	for(int i=0;i<=n;i++)
		pd[i]=0; }
poly(int n0,double p[]){	// ����������� �� ������� �������������
	load(n0,p); }
poly(poly &T){				// ����������� "������ �� �������"
	load(T.n, T.pd); }		// (����������� �����������)
~poly(){ delete []pd; }		// ����������
//----------------------------------------------------------
double &get(int k){			// ������ �� ����������� ��������
	static double foo=0;	// ��� �������� ������� - ������
	if (k<0 || k>n) return foo;
	return pd[k];			// �� "�����" ����������� ����������
	}
void show(){				// ����� � "�������������" ����
	for (int i=n,k=0; i>=0; i--){
		if (pd[i]==0) continue;
		if (k++!=0 && pd[i]>0) printf("+");
		printf("%3.1lf",pd[i]);
		if (i>0) printf("*X");
		if (i>1) printf("^%d",i);
		}
	printf("\n");
	}
void add(poly &T){			// �������� - ���������� ������� � ��������
	extend(T.n);			// ��������� �� ����������� �������
	for (int i=0;i<=T.n;i++) pd[i]+=T.pd[i];
	normalize();
	}
void mul(poly &T){			// ��������� 
	poly R(n+T.n);			// ��������������� ������ - ����� ������������
	for (int i=0;i<=n;i++)	// ���������� ��������� ������������ ���� ���
	for (int j=0;j<=T.n;j++)
		R.pd[i+j]+=pd[i]*T.pd[j];
	int c; double *d;		// ����� ���������� �������� � ����������������
	c=n; n=R.n; R.n=c;
	d=pd; pd=R.pd; R.pd=d;
	normalize();
	}
void diff(){				// ����������� �� �������� (k*x^n)' = k*n*x^(n-1)
	for (int i=0;i<n;i++)
		pd[i]=pd[i+1]*(i+1);
	n--;
	}
int compare(poly &T){		// ��������� ���������
	int k=0;
	poly R(*this);			// ����� ��������
	for (int i=R.n;i>=0;i--) 
		R.pd[i]=-R.pd[i];	// �������������� �������������
	R.add(T);				// ��������� �� ������� - ��������
	R.normalize();
	if (R.n==0 && R.pd[0]==0)
		return 0;			// ��������� - ������� ������� = �����
	if (R.pd[R.n]<0) return 1;
	return -1;				// ����� - ���� �������� ������������
	}
//-----------------------------------------------------------
// ��������������� ��������
poly &operator=(poly &R){	// ������������
	if (&R==this)			// ������������ "��� � ����"
		return *this;
	delete []pd;			// ��������� ����� ����� (�������)
	load(R.n,R.pd);			// ����� ������ ����� (������ ��)
	return *this;			// ���������� ������ �� �����
	}
poly &operator=(double *d){	// ������������ ������������ ������� �� ���������
	delete []pd;			// ��������� ����� ����� (�������)
	int nn=d[0];			// � ������ ������� - �����������
	load(nn,d+1);			// ������ - ������
	return *this;			// ���������� ������ �� �����
	}
poly operator+(poly T){		// ��������������� �������� - �������� ��������
	T.add(*this);			// ����� ������� + ������
	return T;
	}
poly operator+(double *p){	// ��������������� �������� � ��������
//	poly R((int)*p,p+1);	// ������� ������ �� �������
//	return *this+R;			// p[0]-�����������, p[1]...p[n+1] - ������������
	return *this+poly((int)*p,p+1);
	}
poly &operator-(poly T){	// ��������������� ��������� - �������� ��������
	for (int i=0;i<=T.n;i++)
		T.pd[i]=-T.pd[i];	// ������������� ������������ ����� ������� ��������
	T.add(*this);			// ����� ������� + ������
	return T;
	}
poly operator*(poly &T){	// ��������� - �������� ��������
	poly R(n+T.n);			// ��������������� ������ - ����� ������������
	for (int i=0;i<=n;i++)	// ���������� ��������� ������������ ���� ���
	for (int j=0;j<=T.n;j++)
		R.pd[i+j]+=pd[i]*T.pd[j];
	return R;				// ������� ���������� ������� �� ��������
	}
poly operator*(int v){		// ��������� �� ����� - �������� ��������
	poly R(*this);
	for (int i=0;i<=R.n;i++)
		R.pd[i]*=v;
	return R; }
// ��������������� �������� int*poly - �������� ��������
friend poly operator*(int v, poly R){
	for (int i=0;i<=R.n;i++)	
		R.pd[i]*=v;
	return R;
	}
// ��������������� ���������� � double* - 
// ����������� ������������� �������
operator double*(){
	double *q=new double[n+2];
	q[0]=n;
	for (int i=0;i<=n;i++)
		q[i+1]=pd[i];
	return q;
	}
// ��������������� ���������
int operator<(poly &T) {	return compare(T)<0; }	
int operator<=(poly &T){	return compare(T)<=0;}	
int operator>(poly &T) {	return compare(T)>0; }	
int operator>=(poly &T){	return compare(T)>=0;}	
int operator==(poly &T){	return compare(T)==0;}	
int operator!=(poly &T){	return compare(T)!=0;}	
// ��������������� [] - ������ �� �����������
double &operator[](int k){	return get(k); }
// ��������������� () � ����� ����������� - ������ ������������
poly &operator()(int k, double v){
	get(k)=v; 
	return *this;}
// ��������������� ���������� � int - ���������� �����������
// operator int(){ return n; }
// ��������������� ������ � ����� - ������������� ��������
// �������� ������
friend ostream &operator<<(ostream &O, poly T){		// �� ������ ��������  � ���������� !!!!!!!!!!!!!!!!!
	O << T.n << endl;								// ��� �������������� ������������
	for (int i=0;i<=T.n; i++) 
		O << T.pd[i] << " ";
	O << endl;
	return O;
	}
// ��������������� ����� �� ������ - ������������� ��������
// �������� ������
friend istream &operator>>(istream &O, poly &T){
	delete []T.pd;
	O >> T.n;
	T.pd=new double[T.n+1];
	for (int i=0;i<=T.n; i++) 
		O >> T.pd[i];
	return O;
	}
poly operator++(int){			// ��������������� poly++
	poly T(*this);
	pd[0]++;
	return T;
	}
poly operator++(){				// ��������������� ++poly
	pd[0]++;
	poly T(*this);
	return T;
	}
};


void main(){
	double A[]={1,-2,3,-4},B[]={5,3,6},C[]={3,1,2,3,4};
	poly a1(3,A),a2(2,B),a3,a4,a5;
	a3=a1;
	a4=C;
	a1.show();
	a2.show();
	a3.show();
	a4.show();
	a5=3*(a1+a2*a3);
	cout << 3*(a1+a2*a3) << a5;				
	ofstream F1("103-01.txt");
	F1 << a1 << a2 << a4 << 3*(a1+a2*a3);
	F1.close();
	ifstream F2("103-01.txt");
	F2 >> a4 >> a3 >> a2 >> a1;
	F2.close();
	a1[1]=15;
	a1(2,16);
	a1.show();
	// cout << "n=" << (int)a1 << endl;
	if (a1==a1) cout << "a1==a1\n";
	if (a1!=a2) cout << "a1!=a2\n";
	if (a1<a2)  cout << "a1<a2\n"; else cout << "a1>=a2\n";
	cout << "a1++ " << a1++;
	cout << "++a1 " << ++a1;
	cout << "a1+C[] " << a1+C;
	double *q=a1;
	for (int i=0; i<=q[0]; i++) cout << q[i+1] << " ";
	delete []q;
}