#include <stdio.h>
#include <windows.h>
//------------------------------------------------------95-07.cpp
//----- �������� ������� ���������� �� ������ �� ��������� �����
 char **load(char *name)		// ������� ���������� ������������
 { FILE *fd; int i,sz,ns;       // ������ ���������� �� ������
 long *pp,p0;					// ������������ ������ �������� ����������
 char **p;                      // ������������ �� �� ������
 if ((fd=fopen(name,"rb"))==NULL) return NULL;
 fread(&sz,sizeof(int),1,fd);   // ��������� �����������
 fread(&ns,sizeof(int),1,fd);   // ��������� ���������� �����
 fread(&p0,sizeof(long),1,fd);  // � ����� ������� �������� ����������
 pp=new long[ns];               // ������� ������������ ������
 p=new char*[ns+1];              // �������� ���������� � ���������� �� ������
 fseek(fd,p0,SEEK_SET);         // ����������������� �� �� � �����
 fread(pp,sizeof(long),ns,fd);	// ������ ������ �������� ����������
 for (i=0; i<ns; i++)
	  { int sz;
	  fseek(fd,pp[i],SEEK_SET);		// ������������ �� i-�� ���������
	  fread(&sz,sizeof(int),1,fd);	// ��������� � ��������� ������
	  p[i]=new char[sz];            // ���������� ����� - ������
	  fread(p[i],sz,1,fd);
	  }
 p[ns]=NULL; fclose(fd); return p;}

void main(){
char **pp=load("95-06.dat");
for (int i=0; pp[i]!=NULL; i++) {
	char c[80];
	CharToOemA(pp[i],c);
	printf("%s",c);
	}
}
