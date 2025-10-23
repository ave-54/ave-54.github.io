#include <stdio.h>
struct list{
	int val;
	list *next,*prev;
};
void show(list *p) {
list *q=p; do{
	printf("%d ",p->val);	
	p=p->next;
	} while(p!=q);
}

//------------------------------------------------------63-08.cpp
//--- ������� �� ����������� ������
void In(list *&ph, int v){
 list *q = new list;                // ����� ������� ��� ������������
 q->val = v; q->next = q->prev = q;
 if (ph == NULL) { ph=q; return; }  // ������ ���� - ������������
 q->next = ph;                      // ��������� �� ����� = ������
 q->prev = ph->prev;				// ���������� ��� ������ = ���������
 ph->prev->next = q;				// ��������� ��� ���������� = �����
 ph->prev = q; }					// ���������� ��� ������� = �����

int Out(list *&ph){
  if (ph==NULL) return -1;
  int v=ph->val;
  list *q=ph;						// ��������� �������
  ph=ph->next;						// ������� �� ���������	
  if (ph->next==ph) ph=NULL;		// ������������ ���� ������
  q->next->prev=q->prev;			// ������� ��� ���� "����������"
  q->prev->next=q->next;
  delete q;
  return v;
}


void main(){
list *ph=NULL;
int nn;
In(ph,6);In(ph,7);In(ph,3);In(ph,5);In(ph,4);
printf("%d\n",Out(ph));
show(ph);
In(ph,12);In(ph,14);In(ph,13);
while((nn=Out(ph))!=-1) printf("%d\n",nn);
}
