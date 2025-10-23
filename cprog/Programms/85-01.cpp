#include <stdio.h>
#include <string.h>
//------------------------------------------------------85-01.cpp
// �������� �� �� ������ ������ � ����� ���������
// ����� ������ ����� - ������� (����� - ������� - ������)
struct tree2{
	int cnt;		// ���������� ������������ ������ � ������
	char *s;
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
tree2 *get_n(tree2 *p, int n){
	if (p==NULL) return NULL;
	if (n >= p->cnt) return NULL;
	if (p->l!=NULL){
		int ll=p->l->cnt;
		if (n<ll) return get_n(p->l,n);
		n-=ll;
		}
	if (n-- ==0) return p;
	return get_n(p->r,n);
	}

// ���������� ���������
void add(tree2 *&p, char *ss){
	if (p==NULL) p=create(ss);
	else p->cnt++, add(p->r,ss);
	}

// ��������� �� ����������� ������
void insert(tree2 *&p, int n, char *ss){
	if (p == NULL) { p=create(ss); return; }
	if (n >= p->cnt) return;
	p->cnt++;
	if (p->l!=NULL){
		int ll=p->l->cnt;
		if (n<ll) { insert(p->l,n,ss); return; }
		n-=ll;
		}
	if (n-- ==0) {		
		if (p->l==NULL) 		// ����� ������ - � ����
			p->l=create(ss);
		else  { insert(p->r,0,p->s); 
				p->s=ss; }		// ����� - ��������� ������� � ������ ��������� � ��=0
		}
	else insert(p->r,n,ss);
	}

// �������� �� ����������� ������
char *remove(tree2 *&p, int n){
	if (p == NULL) return NULL; 
	if (n >= p->cnt) return NULL;
	p->cnt--;
	if (p->l!=NULL){
		int ll=p->l->cnt;
		if (n<ll) return remove(p->l,n);
		n-=ll;
		}
	if (n-- ==0) {
		char *ss = p->s;
		tree2 *q;
		if (p->l==NULL && p->r==NULL) { delete p; p=NULL; return ss;}
		if (p->l==NULL) { q=p->r; delete p; p=q; return ss;  }
		if (p->r==NULL) { q=p->l; delete p; p=q; return ss;  }
		p->s = remove(p->l,0); return ss;
		}
	else return remove(p->r,n);
	}
// ������������ ������
tree2 *balance(tree2 *pp[], int a, int b){
	if (a>b) return NULL;
	tree2 *q;
	if (a==b) { q=pp[a]; q->l=q->r=NULL; q->cnt=1; return q; }
	int m=(a+b)/2;
	q=pp[m];
	q->l=balance(pp,a,m-1);
	q->r=balance(pp,m+1,b);
	q->cnt=b-a+1;
	return q;	
	}

// ����� ������ � ����������� ������� ���������� �� �������
void set(tree2 *pp[], tree2 *p, int &ln){
	if (p==NULL) return;		// ln - ���������� (����������) �����
	set(pp,p->l,ln);			// ���������� ��������� ���������
	pp[ln++]=p;					// ��������� ��������� �� ������� ������� 
	set(pp,p->r,ln); }

void balance(tree2 *&ph){
	int sz=ph->cnt;
	tree2 **pp=new tree2*[sz];
	int ln=0; set(pp,ph,ln);
	ph=balance(pp,0,sz-1);
	}

// ����� ������
void scan(tree2 *p, int level, int &ln){
	if (p==NULL) return;
	scan(p->l, level+1,ln);
	printf("l=%d n=%d cnt=%d :%s\n", level, ln, p->cnt, p->s);
	ln++;
	scan(p->r, level+1,ln);
	}

void main(){
tree2 *ph=NULL;
int k=0;
FILE *fd=fopen("85-01.cpp","r");
char c[80];
while(fgets(c,80,fd)!=NULL) { c[strlen(c)-1]=0; add(ph,strdup(c)); }
fclose(fd);
puts("-----------");k=0;scan(ph,1,k);
balance(ph);
puts("-----------");k=0;scan(ph,1,k);
insert(ph,0,"aaaaa");
insert(ph,0,"bbbbb");
insert(ph,1,"ccccc");
insert(ph,1,"ddddd");
insert(ph,0,"eeeee");
insert(ph,3,"fffff");
puts(remove(ph,4));
puts(remove(ph,4));
puts(remove(ph,1));
puts(remove(ph,0));
puts("-----------");k=0;scan(ph,1,k);
}