#include <stdio.h>
#include <string.h>
//------------------------------------------------------102-03.cpp
//-----��� ������� ������ string ������� � ����������� ������
 class string{
		char *str;
 static string *fst;	// ��������� ��������� ������ ( ����������� )
		string *next;   // ��������� �� ��������� ������� (�������)
 public:
 static void show(){    // �������� ���� �������� - ����������� �������
		string *p;
		for (p=fst; p !=NULL; p=p->next) p->put();
		}
 void put(){puts(str);} // ����� ����������� ������� ������� �������
 string (char*s){       // �����������
		str=strdup(s);
		next = fst; 
		fst = this;}	// ��������� � ������ ������������ ������
 ~ string (){           // ���������� 
		if (fst==this){	// �������� �������
			fst=fst->next;
			}
		else{			// ����� ����������� � ������
			string *p;
			for (p=fst;p->next!=this;p=p->next);
			p->next=this->next;
			}			// � ����������� �������� �� ������
		delete []str;
		}
 };
 
 string *string::fst=NULL; // ����������� ������������ �������� ������
 
 void main()
 {  string a("aaa"),b("bbb"),*p=new string("ddd"),c("ccc"); 
	string::show(); 
	delete p;
	string::show(); 
	} // ����� ����������� ������� �� ������� �����
