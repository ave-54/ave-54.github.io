//------------------------------------------------------62-05.cpp
//--- ������ ���������� �� ��������������� �� ����� �����
#include <stdio.h>
 int my_strlen(char *p){ int i;
 for (i=0; *p!=0 && *p!=' '; p++,i++);
 return i;}
 char **SortedWords(char *p){
 int nw=0,k; char *q;
 for (q=p; *q!=0; q++)			// ������� ���������� ���� �� ������ ����
 if (q[0]!=' ' && (q[1]== ' '|| q[1]==0)) nw++;
 char **qq=new char*[nw+1];		// ������� ��� �� ������ (������� ������)
 nw=0;
 if (*p!= ' ') qq[nw++]=p;		// ������ ���������� �� �����
 for (p++; *p!=0; p++)			// ���� ������ ����� - 
 if (p[0]!=' ' && p[-1]==' ')	// ��������� ������� ��������� � ������
	  qq[nw++]=p;
 qq[nw]=NULL;
 do {							// ���������� ������� ����������
	 k=0;						// � ������������� ����������� �������
	 for (int i=0; i<nw-1; i++)	// ��������� ���� (�� �������)
		if (my_strlen(qq[i])>my_strlen(qq[i+1])){
		   k++;
		   char *g=qq[i]; qq[i]=qq[i+1]; qq[i+1]=g;
		   }
	  } while(k);
 return qq; }

 void main(){
 char **pp=SortedWords("this is a text string of nine words");
 for (int i=0; pp[i]!=NULL; i++){
	for (int j=0;pp[i][j]!=0 && pp[i][j]!=' ';j++)
		putchar(pp[i][j]);
	putchar('\n');
	}
 delete []pp;
 }
