//-------------------------------------------------------105-01.cpp
// �������� ������� � ������� ��
#define T int		// ��������� ������ ����� ����������� ����
#define N 100		// ��� ��������� � ����������� �������

struct Array{
	T Data[N];
	int k;			// ������� ���-�� ���������
	Array(){ k=0; }	// ����������� - ������ ����
	void add(T &v){	// ���������� ��������
		if (k>=N) return;
		Data[k++]=v;}
	T remove(int m){
		T foo;
		if (m>=k) return foo;
		foo=Data[m];
		for(int i=m;i<k-1;i++)
			Data[i]=Data[i+1];
		k--;
		return foo;
		}
};

#include <iostream>
using namespace std;
void main(){
	Array A;
	int B[10]={6,2,8,3,56,7,89,5,7,9};
	for (int i=0;i<10;i++)
		A.add(B[i]);
	cout << A.remove(2) << endl;
	cout << A.remove(1) << endl;
	cout << A.remove(0) << endl;
	cout << A.remove(1) << endl;
	}