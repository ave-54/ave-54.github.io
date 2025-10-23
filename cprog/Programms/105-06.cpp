#include <iostream>
#include <fstream>
using namespace std;
//------------------------------------------------105-06.cpp
// ������ ��������� ������
template <class T>
class btree
	{
	class node{					// ���������� ����� - 
	public:						// ������� ������
		T *pd;
		int cnt;				// ������� ������ � ���������
		node *l,*r;				// ��������� �� ��������
		T *get(T *s){			// ����� �� �������� (��������)
			if (*s==*pd)return pd;
			if (*s<*pd) return l==NULL ? NULL : l->get(s);
			else		return r==NULL ? NULL : r->get(s);
			}
		T *get(int m){			// ���������� �� ����������� ������
			if (m>=cnt) return NULL;
			if (l!=NULL){		// ���� ���� ����� ��������� � ���� ��������
				if (m<l->cnt) return l->get(m);
				m-= l->cnt;		// �� �������� - ��������� ����� ������ � ���
				}				// ��=0 - ������� �������
			if (m--==0) return pd;	
			return r->get(m);	// ����� - � �������� � ������ ���������
			}
		void insert(T *s){		// ��������� � ������
			cnt++;
			if (*s<*pd){
				if (l==NULL) l=new node(s);
				else l->insert(s);
				} 
			else{
				if (r==NULL) r=new node(s);
				else r->insert(s);
				} 
			}
		node(T *s) {cnt=1; pd=s; l=r=NULL; }
		~node(){				// ���������� ����������� ��� ���������
			if (l!=NULL) delete l;
			if (r!=NULL) delete r;
			}
		friend ostream &operator<<(ostream &O,node &N){
			O << N.cnt << endl << *N.pd << endl;
			if (N.l==NULL) O << 0 << endl; else  O << *N.l;
			if (N.r==NULL) O << 0 << endl; else  O << *N.r;
			return O;
			}
		friend istream &operator>>(istream &I,node &N){
			N.pd=new T; I >> *N.pd;
			int n;
			I >> n;
			if (n!=0) { N.l=new node(NULL); N.l->cnt=n; I >> *N.l; }
			I >> n;
			if (n!=0) { N.r=new node(NULL); N.r->cnt=n; I >> *N.r; }
			return I;
			}
		};	//--------------- ��������� ������ node
	node *head;
public:
	btree(){ head=NULL; }
	~btree(){ if (head!=NULL) delete head; }
	btree &operator<<(T *s){
		if (head==NULL) head=new node(s);
		else head->insert(s);
		return *this;
		}
	T *operator[](int m){
		return head==NULL ? NULL : head->get(m);
		}
	T *operator[](T *key){
		return head==NULL ? NULL : head->get(key);		
		}
	operator int(){			// ���������� � int - ����� ������
		return head==NULL ? 0 : head->cnt; }				
	friend ostream &operator<<(ostream &O, btree &T){
		O << (T.head==NULL ? 0 : *T.head);
		return O;
		}
	friend istream &operator>>(istream &I, btree &T){
		if (T.head!=NULL) { delete T.head; T.head=NULL; }
		int n; I >> n;
		if (n!=NULL){
			T.head=new node(NULL); T.head->cnt=n; I >> *T.head;
			}
		return I;
		}
	};



void main(){
int c[10]={4,7,3,1,5,2,8,6,7,5},i;
btree<int> A,B;
for (int i=0; i<10; i++) 
	A << &c[i];
int n=A;
for (i=n-1; i>=0; i--) 
	cout << *A[i] << " ";
cout << endl;
ofstream F1("105-06.txt");
F1 << A;
F1.close();
ifstream F2("105-06.txt");
F2 >> B;
F2.close();
cout << B;
for (i=0; i<(int)B; i++) 
	cout << *A[i] << " ";
}