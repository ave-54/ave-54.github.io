#include <stdio.h>
struct list{
	int val;
	list *next;
};
void show(list *p) {
for (; p!=NULL; p=p->next) printf("%d ",p->val);
}

//---------------------------------------------------------63-03.cpp
// ������������� ������� � ����� ����������� �������
// ��������� � ����� ������ - ��������� � �������
void In(list *&ph,int v){
	list *q=new list,*p;
	q->next=NULL; 
	q->val=v;
	if (ph==NULL) ph=q;		// ������ ���� - ������������
	else {					// ���� ������ ����� ������
		for (p=ph; p->next!=NULL; p=p->next);
		p->next=q;			// ��������� �� ��������� - �����
	}}
// ��������� � ������ ������ - ���������� � ����
void PUSH(list *&ph,int v){
	list *q=new list;
	q->next=NULL; 
	q->val=v;
	q->next=ph;				// ��������� �� ����� - ������ ������
	ph=q; }					// ����� ������ ������

int Out(list *&ph){
	if (ph==NULL) return -1;
	list *q=ph;				// ��������� �������
	ph=ph->next;			// ���������� � ����������	
	int v=q->val;
	delete q;				// ������� �������
	return v;}
// ��������� �� ������ � ��������� ��������
// list	*PH[2];  -   ��������� �������, [0]-������, [1]-���������
void	In(list *ph[], int v){
	list *p= new list;		// ������� ������� ������;
	p->val=v;				// � ��������� ���
	p->next=NULL; 			// ����� ������� - ���������		
	if (ph[0]==NULL)		// ��������� � ������ �������
		ph[0]=ph[1]=p; 
	else{					// ��������� �� ��������� ���������	
		ph[1]->next = p;	// ��������� �� ��������� = �����
		ph[1] = p;			// ��������� = ����� 
	}}

int	Out(list *ph[]){ 		// ���������� �� ������� 
	if (ph[0]==NULL) 
		return -1; 			// ������� �����
	list *q=ph[0];			// ���������� ������� ��������
	ph[0]=q->next;		
	if (ph[0]==NULL) 
		ph[1]=NULL;			// ������� ������������
	int v = q->val;
	delete q; return v; }

void main(){ int v; list *phh=NULL, *ph[2]={NULL, NULL};
In(phh,7); In(phh,5); In(phh,3);
printf("%d ",Out(phh));  
In(phh,12); In(phh,7); In(phh,6);
while ((v=Out(phh))!=-1) printf("%d ",v); 
puts("\n-------------------------");
In(ph,7); In(ph,5); In(ph,3);
printf("%d ",Out(ph));  
In(ph,12); In(ph,7); In(ph,6);
while ((v=Out(ph))!=-1) printf("%d ",v); 
PUSH(phh,7); PUSH(phh,5); PUSH(phh,3);
PUSH(phh,12); PUSH(phh,7); PUSH(phh,6);
puts("\n-------------------------");
while ((v=Out(phh))!=-1) printf("%d ",v); 
}
