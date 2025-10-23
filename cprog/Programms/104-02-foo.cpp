#include <stdio.h>
//------------------------------------------------------104-02.cpp
//------- ������� � ������������ �������� ���������� �� ������
 class matrix{
 int n,m;						// ����������� ������� y,x
 double **pd;                   // ��������� �� ��� �� ������
//----- �������� ������ �������� ����� ��� � ����������
 void load(int n0,int m0, double **d=NULL){
	 n=n0; m=m0;
	 pd=new double*[n];
	 for (int i=0;i<n;i++){ 
		 pd[i]=new double[m];
		 for (int j=0;j<m;j++)
			 pd[i][j]=(d==NULL ? 0 : d[i][j]);
	}}
 void destroy(){
	 for (int i=0;i<n;i++)
		delete[] pd[i];
	 delete []pd;}
 public:                        // ������������ 
//---- ����������� ������ �������
 matrix(int y,int x){ load(y,x);}
//---- �����������, ����������� ������� �� ��������� �������
 matrix(int y,int x,double *q){
	load(y,x);
	for (int i=0; i<n; i++){	// ������� � ��������� ������ �������
      for (int j=0; j<m; j++) pd[i][j]=*q++;
      }}
 //---- �����������, ����������� ������� �� ������ �������������
 matrix(int y,int x,double a,...){
 double *q=&a;					// ��������� �� ������ ���������� �������
	load(y,x);
    for (int i=0; i<n; i++){	// ������� � ��������� ������ �������
      for (int j=0; j<m; j++) pd[i][j]=*q++;
      }}
//---- �����������, ����������� ������� �� ������ �������������
// ������ : int,int,double ���������� � �������� ������������
 matrix(int y,int x,int a,...){
	int *q=&a;                  // ��������� �� ������ ���������� �������
	load(y,x);
	while(*q>=0){				// ������������ ������ �������� <0
	   int yy=*q++;				// ������� ���������� � �����������
	   int xx=*q++;
	   double vv=*((double*)q); q+=sizeof(double)/sizeof(int);
	   if (xx>=0 && xx<m && yy>=0 && yy<n) pd[yy][xx]=vv;
	   }}
//---- ����������� �����������
 matrix(matrix &R){ load(R.n,R.m,R.pd);}
//---- ����������
 ~matrix(){ destroy(); }
//---- ���������� ������ �� �������� �����������
 double &operator()(int yy, int xx){
	static double ERROR=0;
	if (xx>=0 && xx<m && yy>=0 && yy<n) return pd[yy][xx];
	else return ERROR; }
//----- ��������������� �������� ������������
 matrix &operator=(matrix &T){
	 destroy();
	 load(T.n,T.m,T.pd);
	 return *this; }
//----- ��������������� �������� ��������
 matrix operator+(matrix &T){
	 int i,j;
	 int nn=(n>T.n ? n : T.n);
	 int mm=(m>T.m ? m : T.m);
	 matrix X(nn,mm);
	 for (i=0; i<n; i++)
	 for (j=0; j<m; j++) X.pd[i][j]=pd[i][j];
	 for (i=0; i<T.n; i++)
	 for (j=0; j<T.m; j++) X.pd[i][j]=T.pd[i][j];
	 return X;}
//-------------------------------------
 void show(){
 for (int i=0; i<n; i++, puts(""))
 for (int j=0; j<m; j++) printf("%2.1lf  ",pd[i][j]);
	}
 };
//------- ������ ������ � ���������
 void FOO(double &k, matrix &X){
	X=matrix(5,5);
	printf("Different References: %x %x\n",&k,&X(0,0));
	X(0,0)=k;
	}

 void main(){
 double dd[6]={1,7,4,5,8,3};
 matrix b(2,3,dd);					// ���������� �� �������
 matrix c(2,2,3.3,4.4,2.5,3.6);     // ���������� �� ������
 matrix d(6,6,0,0,2.5,3,5,6.5,-1);  // ���������� " �� �����������"
 double x=d(3,5); d(2,3)=7; c(1,1)++; d(1,1)= c(1,1)+5;
 b.show();
 b=d+b+c;
 b.show();
 c.show();
 d.show();
 FOO(d(0,0),d);
 }
