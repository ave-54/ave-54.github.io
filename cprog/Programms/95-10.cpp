#include <stdio.h>
#include <string.h>
//------------------------------------------------------95-10.cpp
//---- ���������� ������ � ����� "������� ������"
 struct tree {				// ������� ������ � ������
	char *str;              // ������ � ������
	int n;					// ���������� ��������
	tree *p[4];             // ��������� �� �������� � ������
 };
 struct ftree{				// ������� ������ � �����
	int n;					// ���������� ��������
	long fp[4];             // ��������� �� �������� � �����
	int sz; };              // ����� ������ � ����� (���)

 #define FNULL -1L
 #define TSZ sizeof(ftree)

//------ ������� ������ ���������� ����� ����������� ������� � �����
 long PutTree(tree *q, FILE *fd){
	if (q == NULL) return FNULL;
	ftree CUR; CUR.n=q->n;		// ������� ������� - ��������� ����������
	long pos;
	for (int i=0; i<q->n; i++)	// ����������� ���������� ��������
		CUR.fp[i]=PutTree(q->p[i],fd);
	pos = ftell(fd);            // ����� �������
	CUR.sz=strlen(q->str)+1;    // ����� ������ (���)
	fwrite(&CUR,TSZ,1,fd);      // ��������� �������
	fwrite(q->str,CUR.sz,1,fd); // ��������� ������
	return pos;}
// � ������ ����� ������������ ��������� �� ��������
// ������� ������
void SaveTree(tree *p, char *name){
	FILE *fd; long pos0;		// ��������� �� �������� �������
	if ((fd=fopen(name,"wb")) ==NULL) return;
	fwrite(&pos0,sizeof(long),1,fd); // ������������� ����� ��� ���������
	pos0 = PutTree(p,fd);       // ��������� ������
	fseek(fd,0L,SEEK_SET);		// �������� ���������
	fwrite(&pos0,sizeof(long),1,fd); 
	fclose(fd);
	}

 tree A1={"aaaaa",0};
 tree A2={"bbb",0};
 tree A3={"cccc",0};
 tree A4={"dddd",0};
 tree B1={"eee",2,&A1,&A2};
 tree B2={"ffff",2,&A3,&A4};
 tree C={"gggg",2,&B1,&B2};
 void main(){
 SaveTree(&C,"95-10.dat");
 }
