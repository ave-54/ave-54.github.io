#include <stdio.h>
 typedef unsigned char uchar;
//------------------------------------------------------39-10.cpp
//------����� ����� ������������ �����������
 void lshift(uchar in[], int n)
 { int carry;						// ������ ��������
 int i,z;
 for (carry=0, i=0; i<n; i++){ 
      z=(in[i] & 0x80)>>7;          // �������� ������� ������ (�������)
      in[i] <<= 1;                  // �������� ����� � ����������
      in[i] |=carry;                // ������ ������� � ������� ������
      carry = z;                    // ��������� ����� �������
      }}
 void rshift(uchar in[], int n)		// ����� ��������������
 { int carry=((in[n-1]&0x80)!=0);    // ������ �������� = ����� ���������
 int i,z;
 for (i=n-1; i>=0; i--){ 
      z = in[i] & 1;                 // �������� ������� ������ (�������)
      in[i] >>= 1;                   // �������� ������ � ����������
      in[i] |= carry <<7;            // ������ ������� � ������� ������
      carry = z;                     // ��������� ����� �������
      }} 

void main(){
long c=125000, c2=-55;
lshift((uchar*)&c,sizeof(long));
lshift((uchar*)&c2,sizeof(long));
printf("c=%ld c2=%ld\n",c,c2);
rshift((uchar*)&c,sizeof(long));
rshift((uchar*)&c2,sizeof(long));
printf("c=%ld c2=%ld\n",c,c2);
}
