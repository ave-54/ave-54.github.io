//------------------------------------------------------82-02.cpp
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

//--------------------------------------------------------
// ������ ����������� ����� ������ � ����� �������������� �����
void scan1(tree *p){
	tree **stack=new tree*[1000];	// ����� ����
	int sp=-1;						
	stack[++sp]=p;					// � ����� ���� �������
	while(sp!=-1){
		tree *q=stack[sp--];
		printf("cnt=%d val=%d\n",q->cnt,q->val);
		for (int i=q->n-1; i>=0; i--)	// ������ � ���� � �������� �������
			stack[++sp]=q->ch[i];
		}
	delete stack;
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
	for (i=1,k=0; i<N;i++)		// ���������� �������� = N
		if (p->ch[i]->cnt < p->ch[k]->cnt)	
			k=i;					// ������ ������� � min
	insert_min(p->ch[k],vv);		// ������ ������ � ������� ���
	}
//-------------------------------------------------
// ����� ��������� ������� � min ��������
// ������ ����� ������
// ������ �� ���������, ����� ��� ���� ������
// lmin - ����������� �������
// pmin - ������� ����������� ������� 
void find_min(tree *p, int level, int &lmin, tree *&pmin){
	if (p==NULL) return;
	if (lmin!=-1 && level >=lmin) return;		// �������� ������ �������
	if (p->n!=N &&(lmin==-1 || level<=lmin))	// ������� �����
		{ lmin=level; pmin=p; return; }
	for (int i=0; i<p->n;i++)					// ���������� �������� = N
		find_min(p->ch[i],level,lmin,pmin);
	}


// ����� ��������� � ����� ������� �� ��������� ������ 
// � �������������� ������� ������
tree *find_first(tree *ph,int sz){
int fst=0,lst=0;
tree **Q=new tree *[sz];
Q[lst++]=ph;					// ��������� �������� � �������
while(fst!=lst){				// ���� ������� �� �����
	tree *q=Q[fst++];			// ������� ����� ��������� �������
	if (fst==sz) fst=0;
	if (q->n !=N) {
		delete Q;
		return q;
		}
	for (int i=0;i<q->n;i++){	// �������� ���� �������
		Q[lst++]=q->ch[i];
		if (lst==sz) lst=0;
		}
	}
delete Q;
return NULL;}

//---------------------------------------------------------
// ������ �� ������ ����������� ������
struct ltree{
	int val;
	int		cnt;
	int		n;			// ������� ��������
	ltree *son,*bro;	// ������� ���, ����. ����
};

ltree *create_l(int vv){
	ltree *q=new ltree;
	q->cnt=1;
	q->n=0;
	q->val=vv;
	q->son=q->bro=NULL;
	return q;
	}

//----------------------------------------------
// ������� � ��������� � ����������� ����������� ������
void insert_min(ltree *&p,int vv){
	if (p==NULL) { p=create_l(vv); return; }
	p->cnt++;
	ltree *q,*qmin;
	if (p->n!=N) {
		p->n++;
		q=create_l(vv);
		q->bro=p->son;
		p->son=q;					// ������� ������ �������
		return;						// ������� �����
		}
	for (qmin=q=p->son;q!=NULL;q=q->bro)	// ���������� �������� = N
		if (q->cnt < qmin->cnt)	
			qmin=q;					// ������ ������� � min
	insert_min(qmin,vv);			// ������ ������ � ������� ���
	}

void scan(ltree *p,int level){
	if (p==NULL) return;
	printf("l=%d cnt=%d val=%d\n",level,p->cnt,p->val);
	for (ltree *q=p->son;q!=NULL;q=q->bro)
			scan(q,level+1);
	}

//-------------���������� � ���������������� �����
void save(tree *p, FILE *fd){
	fprintf(fd,"%d %d %d\n",p->cnt,p->val,p->n);
	for (int i=0;i<p->n;i++)
		save(p->ch[i],fd);
	}
//-------------�������� �� ����������������� ������
tree *load(FILE *fd){
	tree *p=new tree;
	fscanf(fd,"%d %d %d\n",&p->cnt,&p->val,&p->n);
	for (int i=0;i<p->n;i++)
		p->ch[i]=load(fd);
	return p;
	}

void main(){
	tree *pp=NULL,*pp2=NULL,*pp3=NULL;
	ltree *pp1=NULL;
	int A1[]={4,7,2,56,78,3,7,4,7,4,7,5,8,23,7,4};
	int i,n=sizeof(A1)/sizeof(int);
	for (i=0;i<n;i++) insert_min(pp,A1[i]);
	puts("-- Recursive scan -----------");
	scan(pp,0); 
	puts("-- Without programm stack ---");
	scan1(pp);
	getch();
	puts("-- Save to FILE -------------");
	FILE *fd=fopen("82-02.txt","w");
	save(pp,fd);
	fclose(fd);
	fd=fopen("82-02.txt","r");	
	tree *pp4=load(fd);
	scan(pp4,0);
	puts("--------------------------");
	pp2=create(A1[0]);
	for (i=1;i<n;i++) {
		tree *q;
		int lm=-1;
		find_min(pp2,0,lm,q);
		q->ch[q->n++]=create(A1[i]);
		}
	scan(pp2,0); getch();
	puts("---------------------------------");
	pp3=create(A1[0]);
	for (i=1;i<n;i++) {
		tree *q=find_first(pp3,n);
		q->ch[q->n++]=create(A1[i]);
		}
	scan(pp3,0); getch();
	puts("---------------------------------");
	for (i=0;i<n;i++) insert_min(pp1,A1[i]);
	scan(pp1,0);
	}
