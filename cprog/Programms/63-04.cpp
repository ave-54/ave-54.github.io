#include <stdio.h>
struct list{
	int val;
	list *next;
};
void show(list *p) {
for (; p!=NULL; p=p->next) printf("%d ",p->val);
}

//------------------------------------------------------63-04.cpp
//--- ��������� � ����������� � ����������� �������
// pr ��������� �� ���������� ������� ������
 void InsSort(list *&ph, int v)
 { list *q ,*pr,*p;			// ����� ��������� � ���������� ��������� �� �������
 q=new list; q->val=v;		// ������������ ��� ��������� �� ����������
 for ( p=ph,pr=NULL; p!=NULL && v>p->val; pr=p,p=p->next);
 if (pr==NULL)              // ��������� ����� ������
	  { q->next=ph; ph=q; }
 else                       // ����� ����� �����������
	  { q->next=p;          // ��������� ��� ������ = �������
	  pr->next=q; }}        // ��������� ��� ����������� = �����

void main(){
list *ph=NULL;
InsSort(ph,4); InsSort(ph,5); InsSort(ph,2); InsSort(ph,1);
show(ph);
}
