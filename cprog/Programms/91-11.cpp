#include <stdio.h>
typedef unsigned char uchar;
 void add(uchar out[], uchar in1[], uchar in2[], int n){
	int i, carry;					// ��� ��������
	unsigned w;					// ������� ���������� ��� �������� ���� ������
    for (i=0, carry=0; i<n; i++){
		out [i] = w = in1[i]+in2[i]+carry;
		carry = (w & 0x0100) >>8;
		}} 
 void neg(uchar in[], int n){
	 int i, carry;       
	unsigned w;            
	for (i=0; i<n; i++) in[i]=~in[i];
    for (i=0, carry=1; i<n; i++){
      in [i] = w = in[i]+carry;
      carry = (w & 0x0100) >>8;
      }}
 //------����� ����� ������������ �����������
 void lshift(uchar in[], int n){
	int carry;						// ������ ��������
	int i,z;
	for (carry=0, i=0; i<n; i++){ 
		z=(in[i] & 0x80)>>7;          // �������� ������� ������ (�������)
		in[i] <<= 1;                  // �������� ����� � ����������
		in[i] |=carry;                // ������ ������� � ������� ������
		carry = z;                    // ��������� ����� �������
		}}
 void rshift(uchar in[], int n){	  // ����� ��������������
	int carry=((in[n-1]&0x80)!=0);    // ������ �������� = ����� ���������
	int i,z;
	for (i=n-1; i>=0; i--){ 
		z = in[i] & 1;                 // �������� ������� ������ (�������)
		in[i] >>= 1;                   // �������� ������ � ����������
		in[i] |= carry <<7;            // ������ ������� � ������� ������
		carry = z;                     // ��������� ����� �������
		}} 
//------------------------------------------------------91-11.cpp
//------��������� ����� ������������ �����������
 void mul(uchar out[], uchar aa[], uchar bb[], int n)
 {int i,s1=0,s2=0;						// ������������� ����� - ������ ���
 if (aa[n-1] & 0x80) { neg(aa,n); s1=1; }
 if (bb[n-1] & 0x80) { neg(bb,n); s2=1; }
 for (i=0; i<n; i++) out[i]=0;
      for (i=0; i< n* 8; i++){			// ���� �� ���������� ��������
      if (bb[0] & 1 )                   // ������ ��������� ����� 1 
      add(out,out,aa,n);				// �������� �������� � ������������
      lshift(aa,n);                     // �������� - �����
      rshift(bb,n);                     // ��������� - ������
      }
 if (s1!=s2) neg(out,n);				// ����� �� ��������� - ���. ���
 }

void main(){
long a=125, b=300, c;
mul((uchar*)&c, (uchar*)&a, (uchar*)&b,sizeof(long));
printf("c=%ld\n",c);
long a1=-125, b1=300;
mul((uchar*)&c, (uchar*)&a1, (uchar*)&b1,sizeof(long));
printf("c=%ld\n",c);
}