//------------------------------------------------------62-06.cpp
//------- �������� ��� �� ����� �����
 #include <stdio.h>
 #include <string.h>
 #include <malloc.h>
 #define SIZE0 10					// ��������� ����������� ���
 char **loadfile(FILE *fd){
 char str[1000];
 int n,sz=SIZE0;					// ���-�� ����� � ����������� ���
 char **pp = new char*[sz];			// ������� ���
 for (n=0;fgets(str,1000,fd)!=NULL; n++){
		pp[n]=strdup(str);			// ����� ������ � ��
		if (n+1==sz){				// ����� ������������ - 
			sz*=2;					// ������� �����������
			pp=(char**)realloc(pp,sizeof(char*)*sz);
			}}
 pp[n] = NULL;                      // ������������ ������� ����������
 return pp; }

 void main(){
 FILE *fd=fopen("62-06.cpp","r");
 char **pp=loadfile(fd); int i;
 for (i=0; pp[i]!=NULL; i++) printf("%s",pp[i]);
 for (i=0; pp[i]!=NULL; i++) delete []pp[i];
 delete []pp; fclose(fd);
 }
