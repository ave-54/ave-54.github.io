#include <stdio.h>
#include <stdlib.h>
//---------------------------------------------------------72-04.cpp
// ���������� ������� ����������� ��������
void sort(int A[], int a, int b){
if (a>=b) return;				// ���������� �����������
int m=(a+b+1)/2,i,j,k;			// ��� - ����� �������� ���������
sort(A,a,m-1);					// ����������� ����� ��� ������
sort(A,m,b);
int *tmp=new int[b-a+1];		// ������� ������ �� ��������� ������
for (i=a,j=m,k=0; k<=b-a; k++)
	if (i==m || j!=b+1 && A[j]<A[i])
   		tmp[k]=A[j++];			// ����� �� ������ �����, ����
	else						// ������ ��������� ��� �� ������ ������
		tmp[k]=A[i++];			// ����� �� ������ �����
for (i=a,j=0; i<=b; i++,j++) 
	A[i]=tmp[j];				// ������� ������ ����� ������� � A
delete tmp;	}					// ������� ��������� ������

#define N 100
int main(){
int AA[N],i;
for (i=0; i<N; i++) AA[i]=rand();
printf("\n");
for (i=0; i<N; i++)
	printf("%d ",AA[i]);
sort(AA,0,N-1);
printf("\n");
for (i=0; i<N; i++)
	printf("%d ",AA[i]);
puts("");
}

