#include <stdio.h>
struct list{
	int val;
	list *next,*prev;
};
void show(list *p) {
for (; p!=NULL; p=p->next) printf("%d ",p->val);
}

//------------------------------------------------------63-06.cpp
//-------- �������� �������� ������ �� ��������� ����������� ������
 list *Remove(list *&pp, int n)
 { list *q;											// ��������� �� ������� �������
 for (q = pp; q!=NULL && n!=0; q = q->next, n--);	// ��������� n -��
 if (q==NULL) return NULL;								// ��� �������� � ����� �������
 if (q->prev==NULL)									// �������� ������� -
 pp=q->next;										// ��������� ���������
 else q->prev->next = q->next;						// ��������� ��� �����������  =
													// ��������� �� �������
 if (q->next!=NULL)									// �������� �� ���������� -
 q-> next->prev = q->prev;							// ���������� ��� ����������  =											 
 return q; }										// ���������� ��������

extern list A,B,C;
list A={1,&B,NULL}, B={2,&C,&A}, C={5,NULL,&B}, *ph=&A;
void main(){
list *q=Remove(ph,1); show(ph);
}
