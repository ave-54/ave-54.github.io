#include <stdio.h>
//------------------------------------------------------91-03.cpp
//------ ������� ���������� ��������� ��������
 int what_is_1( unsigned long n)
 { int i,s;
 for (i=0,s=0; i < sizeof(long) * 8; i++)
      { if (n & 1) s++; n >>=1; }  // ��������� ������� ������ � �������� �����
 return s; }

 void main(){
 printf("what_is_1(0x1FF0)=%d\n",what_is_1(0x1FF0)); }
