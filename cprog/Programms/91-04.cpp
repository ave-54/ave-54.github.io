//----------------------------------------------------------91-04.cpp
//--------------- ����������� ���������� �����������
void	bitsort(int A[],int a,int b, unsigned m){
int i;
if (a   >= b) return; 		// �������� ������ � �����
if (m   == 0) return; 		// ����������� ������� �����������
// ��������� ������ �� ��� ����� �� �������� �������,
// �������������� � ����� m
int j,vv;		  			// ���� ���������� �������  
for (i=a, j=b; i<=j; ){	  	
	if ((A[i] & m) ==0)		// ����� � �������� =0 
		{ i++; continue; }	// ����������
	if ((A[j] & m) !=0)		// ������ � �������� =1 
		{ j--; continue; }	// ����������
	vv = A[i]; A[i]=A[j]; A[j]=vv;
	i++, j--;				// ����� � ����� ������
	}
bitsort(A,a,j,m >>1);		// ����������� �����	
bitsort(A,i,b,m >>1); }		// ��� ���������� �������

void mainsort(int B[], int n){
int max,i; unsigned m;
for(max = 0, i=0; i< n; i++)
	if (B[i] > max) max = B[i];
for (m=1; m < max; m <<= 1);
m >>=1;
bitsort(B,0,n-1,m); }

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
int i,n=100,*a=new int[n];
srand(time(NULL));
for (i=0; i<n; i++) a[i]=rand()%1000;
mainsort(a,n);
for (i=0; i<n; i++) printf("%d ",a[i]);
puts("");
}

