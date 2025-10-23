#include <iostream>
#include <fstream>
using namespace std;
#ifndef ADT_mem_def
#define ADT_mem_def 0
//--- ����������� ������� ����� ��������,
// ���������� �� ����������� ������� ������
class ADT_mem{
protected:
public:
	int	n;		// ������� �����������
	void *pd;	// ������� ������
public:
ADT_mem(void *q, int n0){	// �����������
		n=n0;
		pd=new char[n];
		char *q1,*q2;
		for (q1=(char*)q,q2=(char*)pd; n0!=0; n0--)
			*q2++ = *q1++;
		}
// ���������� ���������� ��� ������������ 
// �������� �� ��������� �� ��
virtual ~ADT_mem(){ delete []pd; }
// ������������ ������
virtual int type()=0;			// ���������� ID ������
virtual char* name()=0;			// ����������� ��� ������
virtual int get(char[])=0;		// ���� �� �������� �������������
virtual char *put()=0;			// ����� �� ������� �������������
virtual int save(fstream &F){	// ���������� � �������� �����
	F.write((char*)&n,sizeof(int));
	F.write((char*)pd,n);
	return F.good();}
virtual int load(fstream &F){	// �������� �� � ��������� ������
	delete []pd;
	pd=NULL;
	F.read((char*)&n,sizeof(int));
	if (!F.good()) return 0;
	pd=new char[n];
	F.read((char*)pd,n);
	return F.good();}
virtual ADT_mem *clone()=NULL;	// �������� ����� (�����) �������
virtual int cmp(ADT_mem*)=NULL;	// ��������� ��������
virtual int add(ADT_mem*)=NULL;	// �������� �������� 1=1+2
virtual int fsize()				// ���������� ������ ������� � �����
	{ return n+sizeof(void*); }
	};
//-------------------------------------------------
#endif