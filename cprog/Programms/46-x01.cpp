#include <stdio.h>
//-------------------------------------------46-01.cpp
// �������������� �������
void sort(int in[], int out[], int n){
	int i,j,k,max;
	for (max=in[0],i=0;i<n;i++)
		if (in[i]>max) max=in[i];	// ������� ������ ���������
	int *cnt=new int[max+1];
	for(i=0;i<=max;i++) cnt[i]=0;
	for(i=0;i<n;i++) cnt[in[i]]++;	// ��������� ������� ����������
	for(j=0,i=0;i<=max;i++)
		while(cnt[i]--!=0)			// ��������� ������ ��������
			out[j++]=i;				// � ������������ �� ��������� 
	}								// ����������

void main(){
	int A[]={4,3,7,34,7,4,3,5,32,6,23,4,5,3,6,1,54,6,3,4},B[20];
	sort(A,B,20);
	for (int i=0;i<20;i++) printf("%d ",B[i]);
	}