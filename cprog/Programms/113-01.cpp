#include <stdio.h>
#include <typeinfo.h>
//-------------------------------------------------113-01.cpp
// ������������� ����� � �� ��������������
class A{ public: virtual	void F(){ }};
class B: public A{};
class C: public A{};
class D {};

void main(){
	A aa; B bb;
	if (typeid(A)!=typeid(B)) puts("A!=B");
	puts(typeid(A).name());		// ������� "class A"
	puts(typeid(B).name());		// ������� "class B"
	puts(typeid(aa).name());	// ������� "class A"
	puts(typeid(bb).name());	// ������� "class B"
	A *p=&bb;					// �������������� ��������� � ��
	puts(typeid(p).name());		// ������� "class A*"
	puts(typeid(*p).name());	// ������� "class B"
	A *p1=dynamic_cast<A*>(&bb);// �������������� �� � �� (B->A)
	B *p2=dynamic_cast<B*>(p1); // �������������� �� � �� (A->B)
	C *p3=dynamic_cast<C*>(p1); // �������������� �� � �� (A->C)
	D *p4=dynamic_cast<D*>(p1); // �������������� ???  (A->D) 
	if (p3==NULL) puts("p3==NULL"); // ������� "p3==NULL"
	if (p4==NULL) puts("p4==NULL");	// ������� "p4==NULL"
}