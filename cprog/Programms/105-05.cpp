#include <iostream>
using namespace std;
//------------------------------------------------105-05.cpp
// ������ ������������ ������
template <class T>
class list
	{
	class elem{					// ���������� ����� - 
	public:						// ������� ������
		T *pd;
		elem *next,*prev;		// ���������
		int remove(){			// ����� - ������ ���� ���
			if (next==this)		// ������������ - ������
				return 1;		// �� ������
			next->prev=prev;	// ����� - ����������
			prev->next=next;	// ��������� �������
			return 0;}			// ���� �� �����
		void before(elem *p){	// �������� ���� ����� p
			next=p;				// ��������� �� ����� - p
			prev=p->prev;		// ���������� - p->prev
			p->prev->next=this;	// ��������� �� p->prev - ���
			p->prev=this;		// ���������� ��� p - ���
			}					// �����������
		elem(T *s) {pd=s; next=prev=this; }
		~elem() {}				// ���������� ������
		};
	elem *head;
public:
	void end(T *s){				// ��������� � �����
		if (head==NULL) head=new elem(s);
		else (new elem(s))->before(head);
		}						// �� ������ - ����� ������
	void front(T *s){			// � ������ = � �����
		end(s); head=head->prev;// + ����������� ���������
		}
	void sort();
	operator int();				// ���������� � int - ����� ������
	friend ostream &operator<<(ostream&,list&);
	list() { head=NULL; }
	~list();
};
//---------------------------------------------
template <class T>	istream &operator>>(istream &I,list<T> &L){
		int n; I >> n;			// ���� �� ������ - ������ ��������
		T val;					// 
		while(n--!=0){I >> val; L.end(val); }
		}
//template <class T> int list<T>::elem::remove(){
//		if (next==this)		// ������������ - ������
//			return 1;		// �� ������
//		next->prev=prev;	// ����� - ����������
//		prev->next=next;	// ��������� �������
//		return 0;}			// ���� �� �����
template <class T> list<T>::~list(){
	int k;
	do  {					// ����, ���� �� ������� ���������
		elem *q=head->prev;	// ���������
		k=q->remove();		// ���������
		delete q;			// � �������
		} while(k==0);		// ���� �� �� ������������
	}

template <class T> list<T>::operator int(){
	if (head==NULL) return 0;
	list<T>::elem *p; int n;// ����� ������, ������� �� �������
	for (p=head->next,n=1; p!=head;n++,p=p->next);
	return n;
	}

template <class T> ostream &operator<<(ostream &O,list<T> &L){
	int n=L;				// ���������� � int - ����� ������
	list<T>::elem *p=L.head;
	O << n << endl;
	while(n--!=0){			// �������� ������ � �����
		O << *p->pd << endl;// �������� ��������
		p=p->next;
		}
	return O; }

template <class T> void list<T>::sort(){
if (head==NULL || head->next==head) return;
	elem *q,*out,*p;		// ���������� ���������
	q=head->prev;			// ������� �� ���������� ��������
	q->remove();			// �������� ������
	q->next=q->prev=q;
	out=q;
	int k;
	do {					// ������� ��������� �������
		q=head->prev;
		k=q->remove();
		p=out;				// �������� ���������, ���� 
		do	{				// �� �������� ������ ����
   		if (*q->pd < *p->pd) break;
   		p=p->next;
   		} while(p!=out);	// ��� ���� ������ �� ��������
		q->before(p);		// ������� ������ ����� ���������
		if (*q->pd < *out->pd) 
			out=q;			// ���� ����� ������ - ��������� ���������
	} while(k==0);
	head=out;				// ������� ����� ������ �� ������ �����
	}



void main(){
int c[10]={4,7,3,4,5,2,8,6,7,5};
list<int> A;
for (int i=0; i<10; i++) A.end(&c[i]);
cout << A;
A.sort();
cout << A;
}