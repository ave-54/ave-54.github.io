#include <stdio.h>
//------------------------------------------------------46-16.cpp
//------ ����������� ����������� �������
void sort(int A[], int n){
int i,i1,i2,s,k;
for (s=1; 1; s*=2){						// ������ ������ ������ ������� 2
	int nn=n/s;
	if (n%s!=0) nn++;					// ���-�� ����� �� s
	int n1=nn/2*s;						// ����� ������ �������� �����
	int n2=n-n1;
	if (n1<=0 || n2<=0) return;
	int *B1=new int[n1],*B2=new int[n2];
    for (i=0; i<n1; i++) B1[i]=A[i];
	for (i=0; i<n2; i++) B2[i]=A[i+n1]; 
    i1=i2=0;
	for (i=0,k=0; i<n; i++){			// ������� � ��������� " �������"
		if (i1==s && i2==s)				// ��� ���������� ������ �����
			k+=s,i1=0,i2=0;             // �����
		if (i1==s || k+i1==n1) A[i]=B2[k+i2++];
		else							// 4 ������� ������� �� ���������
		if (i2==s || k+i2==n2) A[i]=B1[k+i1++];
		else                            // ����� � �� ���������
		if (B1[k+i1 ] < B2[k+i2 ]) A[i]=B1[k+i1++];
		else A[i]=B2[k+i2++];
        }
	delete []B1; delete []B2; 
	}}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
int i,n=1000,*a=new int[n];
srand(time(NULL));
for (i=0; i<n; i++) a[i]=rand()%1000;
sort(a,n);
for (i=0; i<n; i++) printf("%d ",a[i]);
puts("");
}
