#include <stdio.h>
struct list{
	int val;
	list *next;
};
void show(list *p) {
for (; p!=NULL; p=p->next) printf("%d ",p->val);
}

//------------------------------------------------------63-05.cpp
//--- ���������� ������������ ������ ���������
 list *sort(list *ph)			// ������� ���������� ��������� ������ ������
 { list *q, *out, *p , *pr;
 out = NULL;                    // �������� ������ ����
 while (ph !=NULL)              // ���� �� ���� ������� ������
	  { q = ph; ph = ph->next;  // ��������� ���������
								// ����� ����� ���������
	  for ( p=out,pr=NULL; p!=NULL && q->val>p->val; pr=p,p=p->next);
	  if (pr==NULL)             // ��������� ����� ������
		   { q->next=out; out=q; }
	  else                      // ����� ����� �����������
		   { q->next=p; pr->next=q; }
	  }
 return out; }

list A={3,NULL}, B={5,&A}, C={1,&B}, D={4,&C},*ph=&D;
void main(){
ph=sort(ph); show(ph);
}
