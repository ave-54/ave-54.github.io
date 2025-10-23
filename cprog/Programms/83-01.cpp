#include <stdio.h>
#include <string.h>
#include <conio.h>
//------------------------------------------------------83-01.cpp
// �������� �� �� ������ ������ � ����� ���������
// � ������� � �������� ��������
struct tree2{
	int cnt;		// ���������� ������������ ������ � ������
	char *s;		// ������ - ������ ������
	tree2 *l,*r;	// ����� � ������ �������
	};		

// �������� ������������ �������	
tree2 *create(char *ss){
	tree2 *q=new tree2;
	q->l = q->r = NULL;
	q->cnt = 1;
	q->s = ss;
	return q; }

// ����� ������� �� ����������� ������
char *get_n(tree2 *p, int n){
	if (p==NULL) return NULL;
	if (n >= p->cnt) return NULL;		// �������� �� �������� ��
	if (p->cnt==1) return p->s;			// ������� �������� - ������
	int ll=p->l->cnt;					// ll - ������� �������� � ������ �������
	if (n<ll) return get_n(p->l,n);		// �� ������, ��� � ������ - ���� � ����
	return get_n(p->r,n-ll);			// ����� -  � ������� ������� � ������� ll
	}

// ���������� ���������
void add(tree2 *&p, char *ss){
	if (p==NULL) p=create(ss);			// ��� ������� ������
	else {
		p->cnt++;						// ����������� �������� ������
		if (p->r==NULL){				// ������� �������� - 
			p->l=create(p->s);			// �������� ������� - ������ �������
			p->r=create(ss);			// ������� �������  -�����
			}
		else add(p->r,ss);				// �� �������� - �������
		}
	}

// ��������� �� ����������� ������
void insert(tree2 *&p, int n, char *ss){
	if (p == NULL) { p=create(ss); return; }
	if (n >= p->cnt) return;			// �������� �� �������� ��
	p->cnt++;
	if (p->r==NULL){					// �������� ������� -
		p->l=create(ss);				// ������� �� �������������
		p->r=create(p->s);				// ������� ������ - �������
		return;							// �������, ����� - ������
		}
	int ll=p->l->cnt;					// ll - ������ � ������ �������
	if (n<ll) insert(p->l,n,ss);		// �� � ��������� ������
	else insert(p->r,n-ll,ss);			// ����� - ������� � ������ � ��������
	}

// �������� �� ����������� ������
// ��������� - ��������� ������ �� �������� �������
int remove(tree2 *p, int n){
	tree2 *q;
	if (p == NULL) return 0; 
	if (n >= p->cnt) return 0;
	p->cnt--;
	if (p->cnt==0) return 1;		// �������� ������� - "���� ����"
	int ll=p->l->cnt;				// ������ � ������ �������
	if (n<ll) {
		if (remove(p->l,n))			// ����� ������� ������ ������� ����
			{
			delete p->l;			// ������� ������ �������
			q=p->r;					// ���������� �������
			p->s=q->s;				// ������� � �������
			p->l=q->l;				// ��������
			p->r=q->r;
			delete q;
			}
		}
	else{
		if (remove(p->r,n-ll))		// ���������� - ������ ������
			{
			delete p->r;
			q=p->l;
			p->s=q->s;
			p->l=q->l;
			p->r=q->r;
			delete q;
			}
		}	
	return 0;						// ������������� ������� 
	}								// "�� ������ ������� ����"

// ������������ ������
tree2 *balance(tree2 *pp[], int a, int b){
	tree2 *q;
	if (a==b) {
		q=pp[a];			// � ��������� ���� �������
		q->cnt=1;			// ���������� �� ��� ��������
		q->r=q->l=NULL;
		return q;
		}
	q=new tree2;			// ������������� �������
	int m=(a+b)/2;			// �������� ���������
	q->l=balance(pp,a,m);	// ������� ���������� 
	q->r=balance(pp,m+1,b);	// �� ��������� ���������
	q->cnt=b-a+1;			// ������������ ����� �������
	return q;				// ���������� ���������
	}

// ����� � ����������� ��� �� �������� �������
void create(tree2 *p, tree2 *pp[], int &ln){
	if (p==NULL) return;
	if (p->cnt==1){			// �������� ������� - ���������
		pp[ln++]=p;
		}
	else{
		create(p->l,pp,ln);	// ������������� - ����� ��������
		create(p->r,pp,ln);
		delete p;			// ������������� - ���������
		}}

void balance(tree2 *&ph){
	if (ph==NULL) return;
	int sz=ph->cnt;
	tree2 **pp=new tree2*[sz];
	int i=0;
	create(ph,pp,i);		// ������� �������� ������� � ���
	ph=balance(pp,0,sz-1);
	delete pp;
	}

// ����� ������ - ���������� ����� ���� �����
int scan(tree2 *p, int level, int &ln){
	if (p==NULL) return 0;
	if (p->l==NULL){
		printf("l=%d n=%d cnt=%d :%s\n", level, ln, p->cnt, p->s);
		ln++;
		return level;
		}
	else{
		printf("l=%d cnt=%d\n", level, p->cnt);
		return scan(p->l, level+1,ln)+scan(p->r, level+1,ln);
		}
}


void main(){
tree2 *ph=NULL;
int k=0;
FILE *fd=fopen("83-01.cpp","r");
char c[80];
while(fgets(c,80,fd)!=NULL) { c[strlen(c)-1]=0; add(ph,strdup(c)); }
fclose(fd);
puts("-----------");k=0;
printf("%d %d\n",scan(ph,1,k)/ph->cnt,ph->cnt); 
getch();
balance(ph);
puts("-----------");k=0;
printf("%d %d\n",scan(ph,1,k)/ph->cnt,ph->cnt); 
getch();
insert(ph,150,"aaaaa");
insert(ph,150,"bbbbb");
insert(ph,151,"ccccc");
insert(ph,151,"ddddd");
insert(ph,151,"eeeee");
insert(ph,150,"fffff");
if (remove(ph,150)) { delete ph; ph=NULL; }
if (remove(ph,150)) { delete ph; ph=NULL; }
if (remove(ph,150)) { delete ph; ph=NULL; }
puts("-----------");k=0;
printf("%d %d\n",scan(ph,1,k)/ph->cnt,ph->cnt); 
getch();
}