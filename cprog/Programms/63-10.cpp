//------------------------------------------------------63-10.cpp
#include <stdio.h>
 struct list { int val; list *next ,*prev; };
 extern list a,b,c;                   	// ����������� ���������� ������
 list a={0, &b,NULL}, b={1,&c,&a}, c={2, NULL,&b}, *ph = &a;
 //------------------------------------------------------- 0
 // ��������� � ����� ����������� ������
 void F0(list *&ph, int v)				// ph - ������ �� ��������� 
 {  list *p,*q = new list;				// ������� ����� ������� ������
	q->val=v; q->next=q->prev = NULL; 	// �� ��������� - ������������
	if (ph == NULL) {ph=p; return; }	// ������ ���� - �������� �����
	for (p=ph;p->next!=NULL;p=p->next);	// ����� ���������
	p->next=q; q->prev=p;}				// ����� - ��������� �� ���������
 //--------------------------------------------------------
 int main(){					
 F0(ph,5); F0(ph,4); F0(ph,6); F0(ph,3);                        
 // �������� ������ � ������ � �������� ������������
 list *q;
 for (q=ph; q->next!=NULL; q=q->next) printf("%d ",q->val);
 for (; q!=NULL; q=q->prev) printf("%d ",q->val);
 }
