#include <stdio.h>
//------------------------------------------------------95-16.cpp
//------------------------------------------------------ 
 #define FNULL -1L
 struct tree { tree *p[4]; char *s; };	// ������� ������ � ������
 struct ftree { long fp[4]; int sz; };  // ������� ������ � �����
 
 tree *F(FILE *fd, long pos) 
 { ftree A;                             // ������� ������� �� �����
 if (pos==FNULL) return NULL;           // NULL-��������� - �����
 tree *q = new tree;					// ������� ������� � �����. ������ 
 fseek(fd,pos,SEEK_SET);				// ����������������� �� �������
 fread( (void*)&A, sizeof(ftree),1,fd); // � ����� � ������ ��
 q->s= new char[A.sz+1];				// ������ ������ ���������� �����
 fread(q->s,A.sz,1,fd);                 // ������� ����� �� ��������
 q->s[A.sz]=0;							// �������� ������������ ����� ������
 for (int i=0; i<4; i++)                // ����������� �������� ��������
 q->p[i]=F(fd,A .fp[i]);
 return q; }							// � ������ ����� �������� �������
 void main() { FILE *fd=fopen("a.dat","rb"); tree *head = F(fd,0L); } 
 
