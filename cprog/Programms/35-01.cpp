 #include <stdio.h>
//------------------------------------------------------35-01.cpp
//---------" �������" ��������� �������� ������������� �������
 void proc(char c[]){
 for (int i=0; c[i]!=0; i++)         // 1 ��� - 1 ������ ��� 1 �������
	  {
	  if (c[i]!=' ' && c[i]==c[i+1])
		   {                         // ��������
		   putchar('*' );
		   while (c[i]==c[i+1]) i++;
		   }
	  else putchar(c[i]);
	  }}

 void main(){ proc("gfbvege aaaaaaaaa ffffffffff"); }
