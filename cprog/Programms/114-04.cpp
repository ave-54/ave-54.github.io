//-----------------------------------------------114-04.cpp
#include <stdio.h>
// ���������� ����������� - ���������� ����������������
class A{
		A *next;	// ���������� ����������� �����������
static	A *head;	// ������ ��������
public:
	A()	{
		next=head;	// ��������� � ������ ������������ ������
		head=this;
		}
	~A(){			// ���������� - ���������� �� ������
		if (head==this) head=head->next;
		else{
			A *p;
			for (p=head; p->next!=this; p=p->next);
			p->next=this->next;
			}
		}
static void show(){
		for (A *p=head; p!=NULL; p=p->next)
			p->F();	//
		}
virtual void G(){ printf("%x:Im A-class\n",this); }
		void F(){  
		G();		// ���������� ����������� - ����������
		}			// ���������������� � ����������� ������
};

A	*A::head=NULL;	// ����������� ��������� ������

class B : A{
	void G(){ printf("%x:Im B-class\n",this);  }
};

class C : A{
	void G(){ printf("%x:Im C-class\n",this);  }
};


B bb;
void main(){
	A::show();
	C cc; A aa;
	A::show();
}