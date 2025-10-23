#include <iostream>
#include <fstream>
using namespace std;
#ifndef ADT_def
#define ADT_def 0
//--- "������" ����������� ������� �����
// ��� ������������� ���� ������
class ADT{
public:
ADT(){}
// ���������� ���������� ��� ������������ 
// �������� �� ��������� �� ��
virtual ~ADT(){}
// ������������ ������
virtual int type()=0;			// ���������� ID ������
virtual char* name()=0;			// ����������� ��� ������
virtual int get(char[])=0;		// ���� �� �������� �������������
virtual char *put()=0;			// ����� �� ������� �������������
virtual int save(fstream &F)=0;	// ���������� � �������� �����
virtual int load(fstream &F)=0;	// �������� �� � ��������� ������
virtual ADT *clone()=NULL;		// �������� ����� (�����) �������
virtual int cmp(ADT*)=NULL;		// ��������� ��������
virtual int add(ADT*)=NULL;		// �������� �������� 1=1+2
virtual int fsize()=0;			// ���������� ������ ������� � �����
};
//-------------------------------------------------
#endif