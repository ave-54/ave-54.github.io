#include <stdio.h>
//------------------------------------------------------76-01.cpp
// ����������� �������������� ��������� �� ()
int calc(char *s){
int inside=0,n;				// ������� ����������� ()
char *p1=NULL,*p2=NULL,*q;	// ��������� �� ������� �������� + � * ��� ()
for (q=s;*q!=NULL;q++)
	switch(*q)
		{
case '*':
case '/':	if (inside==0 && p2==NULL) p2=q; 
			break;				// ����������� ������ * ��� ()
case '+':
case '-':	if (inside==0 && p1==NULL) p1=q; 
			break;				// ����������� ������ + ��� ()
case '(':	inside++; break;
case ')':	inside--; break;
		}
if (p1!=NULL) p2=p1;			// ����������� ����� ����������������� 
if (p2!=NULL){					// ��������
	char c=*p2; *p2=0;			// "���������" ������ �� ��� �����
	switch(c)					// � ��������� �������� ��� �����������
		{						// ��� ���������� ������
case '*':	return calc(s) * calc(p2+1);
case '/':	return calc(s) / calc(p2+1);
case '+':	return calc(s) + calc(p2+1);
case '-':	return calc(s) - calc(p2+1);
		}}
if (*s=='(' && *(q-1)==')'){	// ��������� � () - ����� () 
	*(q-1)=0; return calc(s+1);	// � ������� ���������� ��� ��������� � ()
	}							// ���������� ���������
for (n=0;*s>='0' && *s<='9';s++)
	n=n*10+*s-'0';
	return n;					// ��� ��������� ������������
}

void main(){ char c[]="12*(5+5*6)"; printf("V=%d\n",calc(c)); }
