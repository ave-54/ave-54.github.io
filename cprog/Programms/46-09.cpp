//------------------------------------------------------46-09.cpp
//------ ���������� ����� � ����� �� �������� 2
void shell(int A[], int n ){
	int m,i,k,j;
	for (m=1; m<n; m*=2);		// ����������� ��������� ������� 2
	for (m/=2; m!=0; m/=2)      // ���� � ���������� ����� m=32,16,8..1
	for (k=0; k<m; k++)         // ���� �� ������� k=0..m-1
	for (i=k+m; i<n; i+=m)		// ���������� � ����� � � ������ k
	for (j=i; j>=m && A[j]<A[j-m]; j-=m){
		int cc = A[j]; A[j]=A[j-m]; A[j-m]=cc;
		}
	}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
int i,n=100,*a=new int[n];
srand(time(NULL));
for (i=0; i<n; i++) a[i]=rand()%1000;
shell(a,n);
for (i=0; i<n; i++) printf("%d ",a[i]);
puts("");
}
