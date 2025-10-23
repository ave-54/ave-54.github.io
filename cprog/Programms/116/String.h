#ifndef Str_def
#define Str_def 0
#include <stdio.h>
#include <string.h>
#include "ADT_mem.h"
// ����� ������ �����, ����������� �� ������ ����������� ������
class String : public ADT_mem{
public:
	String(char s[]): ADT_mem(s,strlen(s)+1){}
	~String(){}
// ������������ ������
	int type(){return 2;}			// ���������� ID ������
	char* name(){ return "String";}	// ����������� ��� ������
	int get(char c[]){				// ���� �� �������� �������������
		delete []pd;
		pd=strdup(c);
		n=strlen(c)+1;
		return 1;
	}
	char *put(){					// ����� �� ������� �������������
		return strdup((char*)pd);
	}
	ADT_mem *clone(){ return new String((char*)pd);
	}								// �������� ����� (�����) �������
	int cmp(ADT_mem *q){			// ��������� ��������	
		if (type()!=q->type())		// ������ ������ - ��������� ID
			return type()-q->type();
		return strcmp((char*)pd,(char*)(q->pd)); 
	}
	int add(ADT_mem *q){			// �������� ��������
		if (type()!=q->type())		// ������ ������ - 0
			return 0;
		int n1=n+q->n-1;
		char *p=new char[n1];
		strcpy(p,(char*)pd);
		strcat(p,(char*)q->pd);
		delete []pd;
		n=n1;
		pd=p;
		return 1;
	}
};
#endif