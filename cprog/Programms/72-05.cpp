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
//randomize();
while(n--!=0){
   q=new list;
   q->val=rand();
   q->next=p;
   p=q;
	}
return p;
}
//---------------------------------------------------------72-05.cpp
//  ���������� ������������ ������ ����������� ��������
list *sort(list *p){
list *out,*p1,*p2,*q;
if (p==NULL || p->next==NULL)	// �� ����� ������ - ����� ����������
return p;						// ����� ��������, p2 �������� � 2 ����
p1=p2=p;						// "�������" p1										
while (p2->next!=NULL && p2->next->next!=NULL)
	{
	p1=p1->next; 				// 1-2-3-4-5-6-7 ==> 1-2-3-4 || 5-6-7
	p2=p2->next;
	p2=p2->next;
	}
q=p1->next;						// ���������� ������ �� ��� �����
p1->next=NULL;
p=sort(p);               		// ����������� ���������� ������
q=sort(q);
list OUT;						// ��� ��������� ������ - ���������
p1=&OUT;						// "���������" �������
while(p!=NULL || q!=NULL)		// ���� ��� ������ �� �����
	{							// ������ ���� ��� � ������ ������, ��� �� ������
	if (q==NULL || p!=NULL && p->val < q->val)
   		p1->next=p,				// ��������� �� ������ �� ������� ������
		p1=p1->next,			// � ����� ���������
		p=p->next;
	else
   		p1->next=q,				// ��������� �� ������ �� ������� ������
		p1=p1->next,			// � ����� ���������
		q=q->next;
	}
return OUT.next;}

void main(){ list *ph=create(37);
show(ph); ph=sort(ph); show(ph);
}
