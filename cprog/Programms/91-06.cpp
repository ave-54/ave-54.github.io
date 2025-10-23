//------------------------------------------------------91-06.cpp
//----- ����������� �������������� ����������
 void sort(int in[], int n)
 {int m,i,max,i0,i1;
 int *v0=new int[n];				// ������� 2 "�������"
 int *v1=new int[n];
 for (i=0, max=0; i<n; i++)
      if (in[i] > max) max=in[i];	// ����������� �������������
 for (m=1; m <=max; m <<=1);        // ��������� �������
 for (m >>=1; m !=0; m >>=1){		// �� ���� �������� �� ��������
	for (i0=i1=0; i0+i1 < n; )      // ������������� �� ��������
		if ((in[i0+i1] & m) ==0)    // ���������� �������
			v0[i0] = in[i0+i1], i0++;
		else						// �� ��������
			v1[i1] = in[i0+i1], i1++;
		v0[i0] = v1[i1] = max+1;	// � ������ ������ - "�������"
 for (i0=i1=0; i0+i1 < n; )			// ������� ������� 
	if (v0[i0] < v1[i1])			// �� ��������� �������� 
		in[i0+i1] = v0[i0], i0++;	// � ������������������
    else
		in[i0+i1] = v1[i1], i1++;	// max+1 ������ ���� ������������
    } delete []v0; delete []v1;}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
int i,n=100,*a=new int[n];
srand(time(NULL));
for (i=0; i<n; i++) a[i]=rand()%1000;
sort(a,n);
for (i=0; i<n; i++) printf("%d ",a[i]);
puts("");
}

