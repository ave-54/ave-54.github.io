#include <stdio.h>
#include <ctype.h>
//--------------------------------------------------------94-01.cpp
void more(FILE *fd){
long pp;					// ������� ������� ��������� ����������
char c; int n=0;			// ���������� ��������
while(1){
	pp=ftell(fd);			// ��������� ������� �������
	char c=getc(fd);			//
	if (!isdigit(c)) break;		//
	n=n*10+c-'0';			// ���������� ���������
	}
if (n==0) n=1;				// ���������� ��������� - ��������� 1 ���
while(n--!=0){				// ��������� ��������
	fseek(fd,pp,SEEK_SET);	// ��������� �� ������
	while 	((c=getc(fd)) !=EOF && c!=')'){
		if (c=='(') more(fd);	// ��������� �������� -
		else				// ����������� ����� ����� '('
			putchar(c);		// ���������� �������� �� ')'	
		}
}
}
void main(){
FILE *fd=fopen("94-01.txt","r"); more(fd); fclose(fd);
}

