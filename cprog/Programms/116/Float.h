#ifndef Float_def
#define Float_def 0
#include <stdio.h>
#include "ADT_mem.h"
// ����� ������������� �����, ����������� �� ������ ����������� ������
class Float : public ADT_mem{
public:
	Float(double a): ADT_mem(&a,sizeof(double)){}
	~Float(){}
// ������������ ������
	int type(){return 3;}			// ���������� ID ������
	char* name(){ return "Float";}	// ����������� ��� ������
	int get(char c[]){				// ���� �� �������� �������������
		istrstream S(c);
		S >> *(double*)pd;
		return 1;
	}
	char *put(){					// ����� �� ������� �������������
		char *c=new char[20];
		ostrstream S(c,20);
		S << *(double*)pd << '\0';
		return c;
	}
	ADT_mem *clone(){ return new Float(*(double*)pd);
	}								// �������� ����� (�����) �������
	int cmp(ADT_mem *q){			// ��������� ��������	
	if (type()!=q->type())			// ������ ������ - ��������� ID
		return type()-q->type();
	return *(double*)pd - *(double*)(q->pd); 
	}
	int add(ADT_mem *q){			// �������� ��������
	if (type()!=q->type())			// ������ ������ - 0
		return 0;
	*(double*)pd+=*(double*)(q->pd); 
	return 1;
	}
};
#endif