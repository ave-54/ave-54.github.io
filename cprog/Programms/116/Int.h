#ifndef Int_def
#define Int_def 0
#include <stdio.h>
#include <iostream>
#include <strstream>
using namespace std;
#include "ADT_mem.h"
// ����� ������ �����, ����������� �� ������ ����������� ������
class Int : public ADT_mem{
public:
	Int(int a): ADT_mem(&a,sizeof(int)){}
	~Int(){}
// ������������ ������
	int type(){return 1;}			// ���������� ID ������
	char* name(){ return "Int";}	// ����������� ��� ������
	int get(char c[]){				// ���� �� �������� �������������
		istrstream S(c);
		S >> *(int*)pd;
		return 1;
	}
	char *put(){					// ����� �� ������� �������������
		char *c=new char[10];
		ostrstream S(c,10);
		S << *(int*)pd << '\0';
		return c;
	}
	ADT_mem *clone(){ return new Int(*(int*)pd);
	}								// �������� ����� (�����) �������
	int cmp(ADT_mem *q){			// ��������� ��������	
		if (type()!=q->type())		// ������ ������ - ��������� ID
			return type()-q->type();
		return *(int*)pd - *(int*)(q->pd); 
	}
	int add(ADT_mem *q){			// �������� ��������
		if (type()!=q->type())		// ������ ������ - 0
			return 0;
		*(int*)pd+=*(int*)(q->pd); 
		return 1;
	}
};
#endif