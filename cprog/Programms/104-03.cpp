#include <stdio.h>
#include <malloc.h>
//----------------------------------------------------104-03.cpp
// ����� ����������� �������
class matrix{
	struct koeff{
		int x,y;		// "����������" ������������
		double vv;		// �������� ������������
	} *pd;				// ����������� ������ �������������
	int	nk,sz;			// ������� � ������ ����������� �������
	int N,M;			// ����������� �������
void extend(){			// ����������������� ������
	if (nk!=sz) return;
	sz*=2;
	pd=(koeff*)realloc(pd,sz*sizeof(koeff));
	}
public:
matrix(int n0,int m0){		// �����������
	N=n0; M=m0; nk=0; sz=10;
	pd=new koeff[sz];
	}
double get(int yy,int xx){	// ����� ������������ �� �����������
	for (int i=0;i<nk;i++)
		if (yy==pd[i].y && xx==pd[i].x) 
			return pd[i].vv;
	return 0;}				// ���������� ������������ �� �����������
void set(int yy,int xx, double v){
	for (int i=0;i<nk;i++)
		if (yy==pd[i].y && xx==pd[i].x){ 
			if (v!=0) 		
				pd[i].vv=v;	// ����������� ������ - ��������
			else {			// ������ �������� - �������
				for(int j=i;j<nk-1;j++) pd[j]=pd[j+1];
				nk--;
				}
			return;
		}
	if (v==0) return;			// �� ������ � ����� 0 - �����
	pd[nk].x=xx; pd[nk].y=yy;	// �� ������ � �� ����� 0 - lj,��������
	pd[nk].vv=v;
	nk++;			
	extend();}
void add(matrix &T){			// �������� (������ ������ � �������)
	for (int i=0;i<T.nk;i++){	// ������� ��������� ������������� ������ �������
		int ii=T.pd[i].y;
		int jj=T.pd[i].x;		// �������� � "�����������" ������������� ������
		set(ii,jj,get(ii,jj)+T.pd[i].vv);
	}}
matrix(int n0,int m0,double *d[]){	// ����������� �� ������������� �������
	N=n0; M=m0; nk=0;sz=10;			// ���������� �� ������
	pd=new koeff[sz];
	for (int i=0;i<N;i++)
	for (int j=0;j<N;j++)
		if (d[i][j]!=0) set(i,j,d[i][j]);
	}
void show(){
	puts("--------------------------------------");
	for (int i=0;i<N;i++){
		for (int j=0;j<N;j++) printf("%2.0lf ",get(i,j));
		puts("");
		}}
	};

void main(){
	double a1[]={0,2,0,1},a2[]={0,0,0,0},a3[]={0,0,0,5}, *d[]={a1,a2,a3,a2};
	matrix m1(4,4,d),m2(4,4);
	m1.show();
	m2.set(1,1,12);
	m2.set(0,1,5);
	m2.set(2,2,14);
	m2.show();
	m1.add(m2);
	m1.show();
}