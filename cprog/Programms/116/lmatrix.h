#ifndef Mat_def
#define Mat_def 0
#include <stdio.h>
#include <iostream>
#include <strstream>
using namespace std;
#include "ADT_mem.h"
// ����� ������ �����, ����������� �� ������ ����������� ������
class Matrix : public ADT_mem{
	int nn,mm;						// ����������� � ��, ������ � ��
public:
	Matrix(int n0, int m0, double d[]): ADT_mem(d,n0*m0*sizeof(double)){
		nn=n0; mm=m0;
		}
	~Matrix(){}
// ������������ ������
	int type(){return 4;}			// ���������� ID ������
	char* name(){ return "Matrix";}	// ����������� ��� ������
	int get(char c[]){				// ���� �� �������� �������������
		istrstream S(c);
		delete []pd;
		S >> nn >> mm;
		pd=new double[nn*mm];
		n=nn*mm*sizeof(double);
		for (int i=0;i<nn*mm;i++) S >> ((double*)pd)[i];
		return 1;
	}
	char *put(){					// ����� �� ������� �������������
		char *c=new char[1000];
		ostrstream S(c,10000);
		S << "[" << nn << "," << mm << "]";
		for (int i=0;i<nn;i++){
			S << "{";
			for (int j=0;j<mm;j++){
				S << ((double*)pd)[i*mm+j];
				S << (j==mm-1 ? "}" : ",");
				}
			}
		S << '\0';
		return c;
	}
	ADT_mem *clone(){ 
		return new Matrix(nn,mm,(double*)pd);}
	int cmp(ADT_mem *q){			// ��������� ��������	
		if (type()!=q->type())		// ������ ������ - ��������� ID
			return type()-q->type();
		Matrix *p1=(Matrix *)this;
		Matrix *p2=(Matrix *)q;
		return p1->nn*p1->mm - p2->nn*p2->mm; 
	}
	int add(ADT_mem *q){			// �������� ��������
		if (type()!=q->type())		// ������ ������ - 0
			return 0;
		//?????????????????????????????????????????????????????
		return 1;
	}
	int load(fstream &F){
		F.read((char*)&nn,sizeof(int));
		F.read((char*)&mm,sizeof(int));
		return ADT_mem::load(F);
		}
	int save(fstream &F){
		F.write((char*)&nn,sizeof(int));
		F.write((char*)&mm,sizeof(int));
		return ADT_mem::save(F);
		}
	};
#endif