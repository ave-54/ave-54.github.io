//------------------------------------------------------95-01.cpp
// ������� ��������� ��� ���������
#include <stdio.h>
#include <conio.h>
#define N 4
struct tree{
	int val;
	int cnt;		// ������� ������ ���������
	int n;			// ������� �������� � ch
	tree *ch[N];	// ������ ���������� �� ��������
	};

//--------------------------------------------------------
// ������ ����������� ����� ������
void scan(tree *p,int level){
	if (p==NULL) return;
	printf("l=%d cnt=%d val=%d\n",level,p->cnt,p->val);
	for (int i=0;i<p->n;i++)
			scan(p->ch[i],level+1);
	}
tree *create(int vv){
	tree *q=new tree;
	q->val=vv;
	q->n=0;
	q->cnt=1;
	return q;
	}
//----------------------------------------------
// ������� � ��������� � ����������� ����������� ������
void insert_min(tree *&p,int vv){
	if (p==NULL) { p=create(vv); return; }
	p->cnt++;
	if (p->n!=N) { 
		p->ch[p->n++]=create(vv);
		return;
		}
	int i,k;
	for (i=1,k=0; i<N;i++)			// ���������� �������� = N
		if (p->ch[i]->cnt < p->ch[k]->cnt)	
			k=i;					// ������ ������� � min
	insert_min(p->ch[k],vv);		// ������ ������ � ������� ���
	}

//-------------���������� � �������� ���������������� �����
void save(tree *p, FILE *fd){
	fwrite(&p->cnt,sizeof(int),1,fd);
	fwrite(&p->val,sizeof(int),1,fd);
	fwrite(&p->n,sizeof(int),1,fd);
	for (int i=0;i<p->n;i++)
		save(p->ch[i],fd);
	}
//-------------�������� �� ��������� ����������������� ������
tree *load(FILE *fd){
	tree *p=new tree;
	fread(&p->cnt,sizeof(int),1,fd);
	fread(&p->val,sizeof(int),1,fd);
	fread(&p->n,sizeof(int),1,fd);
	for (int i=0;i<p->n;i++)
		p->ch[i]=load(fd);
	return p;
	}

void main(){
	tree *pp=NULL,*pp2=NULL,*pp3=NULL;
	int A1[]={4,7,2,56,78,3,7,4,7,4,7,5,8,23,7,4};
	int n=sizeof(A1)/sizeof(int);
	for (int i=0;i<n;i++) insert_min(pp,A1[i]);
	puts("-- Recursive scan -----------");
	scan(pp,0); 
	puts("-- Save to FILE -------------");
	FILE *fd=fopen("95-01.dat","wb");
	save(pp,fd);
	fclose(fd);
	fd=fopen("95-01.dat","rb");	
	tree *pp4=load(fd);
	scan(pp4,0);
	}
