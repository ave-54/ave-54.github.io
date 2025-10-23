#include <stdio.h>
#include <string.h>
//------------------------------------------------------102-02.cpp
//----- ����� " �����������" �����
 class cstring{
	char *str;					// ��������� �� ������
	int *pcnt;                  // ��������� �� ������� ������
    void beforChange(){
        if (*pcnt==1)
            return;
        str=strdup(str);		// ��������� ����������� ������
        int *q=new int;         // ������������ ���������� - ������� ������
        *q=1;   				// ����� ���������� ������ +1
        *pcnt--;                // ������ -1
        pcnt=q;                 // ����� ���� �����
        }
    void release(){
        if (--(*pcnt)==0 ){		// ���� ��������� ����������
			delete []str;       // ��������� ������ � �������
			delete pcnt;
            }
        }
 public:
	cstring(char *s){			// �����������
		str=strdup(s);			// ��������� ����������� ������
		pcnt=new int;           // ������������ ���������� - ������� ������
		*pcnt=1; }				// ���������� ������ 1
	cstring(cstring &R){		// ����������� �����������
		str=R.str;              // �������� ��������� � ����������� �������
		pcnt=R.pcnt;
		(*pcnt)++;
		printf("+copies=%d %s %lx\n",*pcnt,str,this);
		}
	~cstring(){					// ����������
		printf("-copies=%d %s %lx\n",*pcnt,str,this);
		release();
        }
	cstring &operator=(cstring &R){ // ������������� ������������
								//  ���������� ��� ����� �����
		printf("-copies=%d %s %lx\n",*pcnt,str,this);
		release();
		str=R.str;              // �������� ��������� � ����������� �������
		pcnt=R.pcnt;            // ������ �����
		(*pcnt)++;
		printf("+copies=%d %s %lx\n",*pcnt,str,this);
		return *this;
		}
    cstring &changeChar(char c, int n){
        if (n<0 || n>=strlen(str))
            return *this;
        beforChange();
        str[n]=c;
        return *this;
        }
    void show(){ printf("cnt=%d %s\n",*pcnt,str); }
 };

 cstring copy(cstring S){ return S; }

int main(){
 cstring a("aaaaa"),b("33333"),c=a,*p;	// ����� ��
 a.show();
 b.show();
 c.show();
 b = a;                             // ���������������� �������� =
 copy(a).changeChar('z',3).show();	// ��� �� � �������
 b.changeChar('x',1);
 c.changeChar('y',1);
 b.changeChar('x',2);
 a.show();
 b.show();
 c.show();
 return 0;
 }

