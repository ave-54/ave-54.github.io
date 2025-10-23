#include <stdio.h>
#include <string.h>

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

 void scan(tree *q,int l){
 if (q==NULL) return;
 printf("%d:%s\n",l,q->str);
 for (int i=0; i<q->n; i++) scan(q->p[i],l+1);
 }

//------------------------------------------------------95-12.cpp
//----- �������� ������� ������ � �������� �� �����
 tree *GetTree(long pos, FILE *fd){ // ���� - ����� ������� � �����
	if (pos == FNULL) return NULL;  // ��������� - ��������� ��
	tree *q=new tree;               // ������� ��������� � ������
	ftree A;                        // ������� ������� �� ����� -
	fseek(fd,pos,SEEK_SET);         // � ��������� ����������
	fread(&A,sizeof(ftree),1,fd);
	q->str=new char[A.sz];          // �������� ������ - ���
	fread(q->str,A.sz,1,fd);
	q->n=A.n;
	for (int i=0; i<A.n; i++)		// ����������� �������� ��������
		q->p[i]=GetTree(A.fp[i],fd);// � ���������� ����������
	return q; }
// � ������ ����� �������� �������� ���������
// �� �������� ������� ������
tree *LoadTree(char *name){
	FILE *fd; long phead;
	if ((fd = fopen(name,"rb")) ==NULL) return NULL;
	fread(&phead, sizeof(long), 1, fd);
	return GetTree(phead, fd); }

void main(){
	tree *q=LoadTree("95-10.dat");
	scan(q,0);}

