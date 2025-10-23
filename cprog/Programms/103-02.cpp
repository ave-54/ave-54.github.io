//-----------------------------------------------103-02.cpp
// ��������������� �������� ������������� ������
#include <stdio.h>
#include <string.h>
#include <malloc.h>

class memory{
	char *pa;
	int sz0;
public:
memory(int sz){
	pa=new char[sz];
	*(int*)pa=sz-sizeof(int);		// ����������� ���������� �����
	sz0=sz;
	}
~memory(){ delete []pa; }
//--------------------------------------------------------------
// ����� ������ ����������� ��� ��������� �� �������
void *malloc(int sz){						
	char *p=pa;
	int lnt;
	while(p<pa+sz0){
		lnt=*(int*)p;
		if (lnt<0)					// ������� ���� - ����������
			p+=-lnt+sizeof(int);
		else{
			if (sz==lnt) {
				*(int*)p=-lnt;		// ������ ����
				return p+sizeof(int);
				}
			p+=lnt+sizeof(int);
			}
		}
	lnt=*(int*)pa;					// �������� �� �������
	if (sz+sizeof(int)>lnt) 
		return NULL;
	lnt-=sz+sizeof(int);
	*(int*)pa=lnt;					// ������� ����� ������� �����
	p=pa+lnt+sizeof(int);			// "�����"- ���������� ����
	*(int*)p=-sz;
	return p+sizeof(int);
	}
//--------------------------------------------------------------------
void show(){						
	puts("---------------------------------------");
	char *p=pa;
	int lnt;
	while(p<pa+sz0){
		lnt=*(int*)p;
		if (lnt<0){					// ������� ���� - ����������
			lnt=-lnt;
			printf("busy:");
			}
		else printf("free:");
		printf(" addr=%8d sz=%d\n",p,lnt);
		p+=lnt+sizeof(int);
		}
	}
//---------------------------------------------------------------------
void free(void *q0){
	char *q=(char*)q0-sizeof(int);
	int lnt=*(int*)q;					// ���������� �����
	lnt=-lnt;
	char *pr=NULL,*p=pa;
	while(p!=q){
		int ln=*(int*)p;
		if (ln<0) ln=-ln;
		pr=p;
		p+=ln+sizeof(int);
		}								// �������� �� �����������
	*(int*)q=lnt;						// ���������� ����
	if (*(int*)pr>0) {
		*(int*)pr+=lnt+sizeof(int);		// ������� � ����������
		p=pr;
		}
	lnt=*(int*)p;
	q=p+lnt+sizeof(int);
	if (q<pa+sz0 && *(int*)q>0)			// ���� ��������� � �� ��������
		*(int*)p+=*(int*)q+sizeof(int);	// ������� �� ���������
	}
};

//-----------------------------------------------
// ����� ���������� �������� � ����������� �������������� ������
class poly{
	int n;						// ������� ��������
	double *pd;					// ������������ ������ �������������
void load(int n0, double p[]){
	n=n0;					// �������� ����� �������� �������
	pd=(double*)MEM.malloc(sizeof(double)*(n+1));
	for(int i=0;i<=n;i++)
		pd[i]=p[i]; }
void extend(int n1){		// ���������� ����������� ��������
	int i;
	if (n1<=n) return;
	double *pd1=(double*)MEM.malloc(sizeof(double)*(n1+1));
	for (i=0;i<=n;i++) pd1[i]=pd[i];
	for (;i<=n1;i++) pd1[i]=0;
	n=n1;
	MEM.free(pd);			// ������� ������ ������
	pd=pd1;					// ������� ����� �� ������
	}
void normalize(){			// ������������ - �������� ������ 0
	while(n>0 && pd[n]==0) n--;
	}						// ������ �� ������������������
public:
static memory MEM;			// ����������� ������ ������ MEM - ���
poly(){						// "������" ������� - ������� �������
	n=0;					// � ������� �������������
	pd=(double*)MEM.malloc(sizeof(double));
	pd[0]=0;}
poly(int m){				// ������� �������� �������
	n=m;					// � �������� ��������������
	pd=(double*)MEM.malloc(sizeof(double)*(n+1));
	for(int i=0;i<=n;i++)
		pd[i]=0; }
poly(int n0,double p[]){	// ����������� �� ������� �������������
	load(n0,p); }
poly(poly &T){				// ����������� "������ �� �������"
	load(T.n, T.pd); }		// (����������� �����������)
~poly(){ MEM.free(pd); }
//-------------------------------------------------------
// ��������������� ���������� new � delete � ������
static void *operator new(size_t sz){
		return MEM.malloc(sz);
		}
static void operator delete(void *p){
		MEM.free(p);
		}
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
	poly R(n+T.n+1);		// ��������������� ������ - ����� ������������
	for (int i=0;i<=n;i++)	// ���������� ��������� ������������ ���� ���
	for (int j=0;j<=T.n;j++)
		R.pd[i+j]+=pd[i]*T.pd[j];
	int c; double *d;		// ����� ���������� �������� � ����������������
	c=n; n=R.n; R.n=c;
	d=pd; pd=R.pd; R.pd=d;
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
};


memory poly::MEM(10000);

void main(){
	double A[]={1,-2,3,-4},B[]={5,3,6};
	poly a1(3,A),a2(2,B),*p;
	poly::MEM.show();
	p=new poly(3,A);
	poly::MEM.show();
	delete p;
	poly::MEM.show();
	}

