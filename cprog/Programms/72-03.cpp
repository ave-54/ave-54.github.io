#include <stdio.h>
#include <stdlib.h>
struct list{
	int val;
	list *next;
};
void show(list *p) {
for (; p!=NULL; p=p->next) printf("%d ",p->val);
puts("");
}

list *create(int n){
list *p=NULL,*q;
while(n--!=0){
   q=new list;
   q->val=rand();
   q->next=p;
   p=q;
	}
return p;
}
//---------------------------------------------------------72-03.cpp
//  ���������� ������������ ������ ����������� �����������
list *sort(list *p){
list *m,*p1,*p2,*q;
if (p==NULL || p->next==NULL)
return p;					// �� ����� ������ - ����� ����������
m=p; p=p->next;				// m-������� - ������ �������
p1=p2=NULL;					// p1,p2 - ����������� ������
while(p!=NULL){
   q=p; p=p->next;			// ������� ��������� �� ��������
   if (q->val < m->val)
		q->next=p1, p1=q;	// ������ ������� - � ������ �������
   else
   		q->next=p2, p2=q;	// ����� - � ������ �������
	}
p1=sort(p1);				// ����������� ���������� ������
p2=sort(p2);
m->next=p2;					// "�������" ������� � ������ ������
if (p1==NULL) return m;		// ������ - ������
for (q=p1;q->next!=NULL; q=q->next);
q->next = m;               // �����, ����� �� ����� �������
return p1;                 // � ������������ � ���� �������
}                          // �� ������

void main(){ list *ph=create(50);
show(ph); ph=sort(ph); show(ph);
}
