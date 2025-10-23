#include <stdio.h>
struct list{
	int val;
	list *next,*prev;
};
void show(list *p) {
list *q=p; do{
	printf("%d ",p->val);	p=p->next;
	} while(p!=q);
}

//------------------------------------------------------63-09.cpp
//--- ��������� � ����������� ������ � ����������� �������
 list *InsSort(list *ph, int v)		// ������� ���������� ����� ���������
 { list *q = new list;              // ����� ������� ��� ������������
 q->val = v; q->next = q->prev = q;
 if (ph == NULL) return q;          // ������ ���� ������� �����
 list *p = ph;
	  do { if (v < p->val) break;   // ����� ������� ����� ������,
	  p=p->next;                    // ������� ���������, ����� -
	  } while (p!=ph);				// ����� ������ � ������ (����� ����������)
 q->next = p;                       // ��������� �� ����� = �������
 q->prev = p->prev;					// ���������� ��� ������ = ���������� ��������
 p->prev->next = q;					// ��������� ��� ����������� = �����
 p->prev = q;						// ���������� ��� �������� = �����
 if ( ph->val > v) ph=q;            // ��������� ����� ������ -
 return ph; }                       // ��������� ���������

void main(){
list *ph=NULL;
ph=InsSort(ph,4); ph=InsSort(ph,5); ph=InsSort(ph,2); ph=InsSort(ph,1);
show(ph);
}
