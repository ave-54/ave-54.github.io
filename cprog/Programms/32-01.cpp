#include <stdio.h>
//------------------------------------------------82-01
#define N 100
void main(){
int A[N],n,k,j,v;
printf("v="); scanf("%d",&v);
k=1; A[0]=2;
for (n=3; n<v && k < N; n++)	// ������� ���� �������� n
	{
	for (j=0; n%A[j]!=0;j++)	// ���� �������� A[]
		if (j==k-1) {			// A[] ���������� -
			A[k++]=n; break; }	// �������� � A[]
	}							// �������������� ����� �� break
for (j=0;j<k;j++) printf("%d ",A[j]);
}