
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//------------------------------------------------------------------46-13.cpp
//-------------- ������ - ����������
void shake(int A[],int n){
int z=1,a=0,b=n-1,i,last=0;			// a,b - �������, z - ����������� (���)
for (i=0;a<b;){
	if (A[i]>A[i+1]){				// ����� � ������������ �����
		int c=A[i];A[i]=A[i+1];A[i+1]=c;
		last=i;
		}
	i+=z;							// ��� � ������� �����������
	if (i==b || i<a) {				// ��������� ������� ???
		if (z>0) i=b=last;			// ����� ������������ - �����
			else i=a=last+1;		// ������� ����� ��� ������
		z=-z;						// ����������� ���������������
		}}}

void main(){
int i,n=1000,*a=new int[n];
srand(time(NULL));
for (i=0; i<n; i++) a[i]=rand()%1000;
shake(a,n);
for (i=0; i<n; i++) printf("%d ",a[i]);
puts("");
}
