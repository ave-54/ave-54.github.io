#include <stdio.h>
#include <string.h>
#define FNULL 0
//------------------------------------------------------95-06.cpp
//---- �������� ����� � �������� ���������� �� ���������� �����
// ������ �����: ns - ����������� �� (���������� ����������)
// p0 - �������� ������� ����������
 void save(char *in, char *out)
 { FILE *fdi,*fdo; char c[80]; int ns,i;
 if ((fdi=fopen(in,"r"))==NULL) return;
 if ((fdo=fopen(out,"wb"))==NULL) return;
 for (ns=0; fgets(c,80,fdi)!=NULL; ns++);   // ���������� �����
 int sz=ns*1.2;								// ����������� � ������ �������
 fseek(fdi,0l,SEEK_SET);                    // ��������� � ������
 long *pp = new long[sz];					// ������ ���������� � �����
 for (i=0;i<sz;i++) pp[i]=FNULL;
 long p0=2*sizeof(int)+sizeof(long);        // ��������� ��������� ��
 fwrite(&sz,sizeof(int),1,fdo);             // �������� ����������� ��
 fwrite(&ns,sizeof(int),1,fdo);             // �������� ����������� ��
 fwrite(&p0,sizeof(long),1,fdo);            // �������� �������� ��
 fwrite(pp,sizeof(long),sz,fdo);            // �������� "������" ��
 for (i=0; i<ns; i++) {						// ��������� ������ �����
	  pp[i]=ftell(fdo);						// �������� ����� i-�� ������
	  fgets(c,80,fdi);
	  int l=strlen(c)+1;					// ���������� � ������� ���
	  fwrite(&l,sizeof(int),1,fdo);
	  fwrite(c,l,1,fdo);
	  }
 fseek(fdo,p0,SEEK_SET);                    // �������� � ����� ������
 fwrite(pp,sizeof(long),sz,fdo);			// �������� ����������
 fclose(fdo);}

 void main(){
 save("95-06.cpp","95-06.dat");
 }
