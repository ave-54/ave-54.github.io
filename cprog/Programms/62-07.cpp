//------------------------------------------------------62-07.cpp
#include <stdio.h> 
 double * F(double *p[], int k) { 
 int i;
 for (i=0; p[i]!=0; i++);			// ������� ����������� ������� ����������
 if (k>=i) return NULL;				// ������ ������� ����������� - �������
 double *q=p[k];					// ��������� k- �� ���������
 for (; k < i; k++)p[k] = p[k+1];	// �������� " �����" �� 1 � ������ - �������
 return q;}							// k-�� � ������� ���
 double a1=4,a2=7,a3=5,a4=1,*pp[]={&a1,&a2,&a3,&a4,NULL};
 void main() { printf("\nRemoved n=2 ...%2.0lf\n",*F(pp,2));
 for (int i=0; pp[i]!=NULL;i++) printf(" %2.0lf",*pp[i]);
 }									// ������� 5 ... 4,7,1.
