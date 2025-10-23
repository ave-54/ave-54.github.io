#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//----------------------------------------------77-07
// ������������������ ���������� ������
int dig_len(int dig,int k){
	int i;
	for( i=0;(dig/=k)!=0;i++);
	return i+1;}
int get_dig(int v,int num,int k){
	while(num--!=0) v/=k;
	return v%k;}
int cnt=0;
struct elem {
	int v;
	elem *next;
	elem(int v0){ v=v0; next=NULL; }
	};
struct queue {
	elem *fst,*lst;
	queue(){ fst=lst=NULL; }
	};

void sort(queue &Q, int sz){
		cnt=0;
		elem *q;
		int max_len=0,l;
		queue *A=new queue[sz];					// ������� - ������� �� ��������� ����
		for (q=Q.fst;q!=NULL;q=q->next)
			if ((l=dig_len(q->v,sz))>max_len) max_len=l;
		printf("max_len=%d\n",max_len);
		for(int raz=0;raz < max_len; raz++){	// �� ���� ������, ������� � �������
			while(Q.fst!=NULL){					// ������ ������� �����
				q=Q.fst; Q.fst=q->next;			// � ������������ �� "��������"
				if (Q.fst==NULL) Q.lst=NULL;	// � ������������ � ��������� ������
				int m=get_dig(q->v,raz,sz);
				q->next=NULL;
				if (A[m].fst==NULL) A[m].fst=A[m].lst=q;
				else { A[m].lst->next=q; A[m].lst=q;} 
				cnt++;
				}
			for (int i=0;i<sz;i++){					// ������� ������ � ��������
				if (A[i].fst==NULL) continue;
				if (Q.fst==NULL){				// �������� ������ - 
					Q.fst=A[i].fst;				// ���������� ������ � ����� �������
					Q.lst=A[i].lst;}
				else{
					Q.lst->next=A[i].fst;		// �� ������ - ������������ � �����
					Q.lst=A[i].lst; }
				A[i].fst=A[i].lst=NULL;			// �������� ������
				}}}

void main()
{
int n=20,*A=new int[n];
queue L;
elem *q;
srand(time(NULL));
for(int i=0;i<n;i++) {
	elem *q=new elem(rand()%10000+1);
	if (L.fst==NULL) L.fst=L.lst=q;
	else { L.lst->next=q; L.lst=q; }
	}
for(q=L.fst;q!=NULL;q=q->next) printf("%d ",q->v);
sort(L,10);	
puts("");
for(q=L.fst;q!=NULL;q=q->next) printf("%d ",q->v);
printf("\ncnt=%d\n",cnt);
}