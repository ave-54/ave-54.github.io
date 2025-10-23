#include <stdio.h>
struct list{
	int val;
	list *next,*prev;
};
void show(list *p) {
for (; p->next!=NULL; p=p->next) printf("%d ",p->val);
for (; p!=NULL; p=p->prev) printf("%d ",p->val);
}

 //--------------------------------------------------------------63-07
 //--------��������� � ���������� ������ � ����������� �������
 void InsSort(list *&ph, int v)		// ������ �� ���������
 { list *q , *p=new list;			// ����� ������� ������
 p->val = v;
 p->prev = p->next = NULL;
	  if (ph == NULL) {             // ��������� � ������ ������
	  ph=p; return ;
	  }                             // ����� ����� ��������� - q
 for (q=ph; q !=NULL && v > q->val; q=q->next);
 if (q == NULL)                     // ��������� � ����� ������
	  {								// ������������ ��������� �� ���������
	  for (q=ph; q->next!=NULL; q=q->next);
	  p->prev = q;
	  q->next = p;
	  return;
	  }                             // �������� ����� �������
 p->next=q;							// ��������� �� ����� = �������
 p->prev=q->prev;					// ���������� ������ = ���������� ��������
 if (q->prev == NULL)               // ��������� � ������ ������
	ph = p;
 else                               // ��������� � ��������
	q->prev->next = p;				// ��������� �� ���������� = �����
 q->prev=p;							// ���������� �������� = �����
 }

void main(){
list *ph=NULL;
InsSort(ph,4); InsSort(ph,5); InsSort(ph,2); InsSort(ph,1);
show(ph);
}
