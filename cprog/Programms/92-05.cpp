#include <stdio.h>
//------------------------------------------------------92-05.cpp
//--- ������� � ���������� ��������� ������� ( printf)
 void my_printf(char *s,...)
 { char *p = (char*)(&s+1);			// ��������� �� ������ ������ ����������
	  while (*s != '\0') {          // �������� ��������� ������
	  if (*s != '%') putchar(*s++); // ����������� ��������� ������
	  else
		   { s++;					// ������������ ��������� ���� "%d"
				switch(*s++){		// ���������� ��������� � ������� � ����������
		   case 'c': putchar(*p++); break;								// ���������� �������
		   case 'd': printf( "%d", *((int*)p)); p+=sizeof(int); break;	// ���������� ������
		   case 'f': printf( "%lf", *((double*)p)); p+=sizeof(double); break; // ���������� �������������
		   case 's': puts( *((char**)p)); p+=sizeof(char*);				// ���������� ���������
				break;													// �� ������
				}}}}
void main(){
my_printf("int=%d double=%f char[]=%s char=%c ",44,5.5,"qwerty",'f'); }
