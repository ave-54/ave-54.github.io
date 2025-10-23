#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXINT 1000000
//----------------------------------------------84-05.cpp
// ������������� ���������� - ���������� ��������

// ����� ������ ������ N  - ��� ������� 2N 2N+1
void scan(int A[], int k, int n, int l){
if (k>n) return;
for (int i=0; i<l;i++) printf(" ");	// ������-��������������� �������
printf("[%d]=%d\n",k,A[k]);
scan(A,2*k,n,l+1);
scan(A,2*k+1,n,l+1);
}

// ���������� � ������ ����� ������ � �������
void set_tree(int A[],int n){
int l,i;
for (l=2;l<=n;l++){				// l - ������ ����������� �������
   for (i=l; i!=1;i=i/2){		// ������ ������ = i/2
      if (A[i]>A[i/2]) break;	// ������ ������ ������� - �����
		int c=A[i];				// ���������� � �������
		A[i]=A[i/2];
		A[i/2]=c;
   		}}}

// ���������� - n ��� ������� �� ������ � ���������� �� ������������ �������
// ����������� �������� � ����� �������, �� ������� ��������,
// ���������� ��  MAXINT. �������� MAXINT ���������� ���������� �������
void sort(int A[],int B[], int n){
for (int i=1; i<=n; i++){		// ��������� n ���
	int j,k;
	B[i]=A[1];
	for (j=1;j<=n;j=k){									// j=k - ������� � ����������� �������
		k=2*j;											// k - ����� �������
		if (k>n)	{ A[j]=MAXINT; break; }				// ��� �������� - MAXINT (�������)
		if (k+1>n)	{ A[j]=A[k]; A[k]=MAXINT; break; }	// ��� ������� ������� - ����� �������
		if (A[k+1]<A[k]) k++;							// ����� - ������� ������������ �� ���
   		A[j]=A[k];										// ����������� �������� ������� � ������
   	}}}

void main(){
int i,N=20;
int *A=new int[N+1];
int *B=new int[N+1];
srand(time(NULL));
for (i=1; i<=N; i++) A[i]=rand()%N;
set_tree(A,N);
scan(A,1,N,0);
sort(A,B,N);
for (i=1; i<=N; i++)
	printf("%d ",B[i]);
puts("");
}
