#include <stdio.h>
 typedef unsigned char uchar;
//------------------------------------------------------91-09.cpp
//------ ��������� �������������� ����� � �������������� ����
 void neg(uchar in[], int n)
 {int i, carry;         // ������ ��������
 unsigned w;            // ������� ���������� ��� �������� ���� ������
 for (i=0; i<n; i++) in[i]=~in[i];
      for (i=0, carry=1; i<n; i++){
      in [i] = w = in[i]+carry;
      carry = (w & 0x0100) >>8;
      }}

void main(){
long c=125000;
neg((uchar*)&c,sizeof(long));
printf("c=%ld\n",c);}
