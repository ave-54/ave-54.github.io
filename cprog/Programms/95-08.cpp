#include <stdio.h>
#include <windows.h>
//------------------------------------------------------95-08.cpp
//---- ������ ���������� �� ������, ������ �� ����������� ������
 char *load(char *name, int num)		// ������������ ������ =
 { FILE *fd; int i,n,sz; long p0,pp;    // ������������ ������
 if ((fd=fopen(name,"rb"))==NULL)
	  return NULL;						// ����� ������ ��������� �����
 fread(&sz,sizeof(int),1,fd);         	// ������� ����������� ��
 fread(&n,sizeof(int),1,fd);         	// ������� ���������� ����������
 fread(&p0,sizeof(long),1,fd);        	// � ��������� ����� �� � �����
 if (num>=n) return NULL;               // ��� ������ � ����� �������
 fseek(fd,p0+sizeof(long)*num,SEEK_SET);
 fread(&pp,sizeof(long),1,fd);			// ��������� ��������� � ������� num
 fseek(fd,pp,SEEK_SET);					// ������������ �� ������
 fread(&sz,sizeof(int),1,fd);			// ��������� ����� ������
 char *p=new char[sz];                  // ������� ������������ ������
 fread(p,sz,1,fd);						// ��������� ������ - ������
 fclose(fd); return p; }				// ���������� ��������� �� ������

 void main(){
 for (int i=20; i>=10; i--){
	char *s=load("95-06.dat",i); if (s!=NULL) { 
		CharToOemA(s,s);
		printf("[%d] %s",i,s); 
		delete [] s;
		}}
 }
