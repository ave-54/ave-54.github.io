#include <stdio.h>
//------------------------------------------------------105-02.cpp
//----- ������ �� - ������������ ������ ����������
// <class T> - �������� ������� - ����� T, ���������� ��� ������
// vector - ��� ������ ��������� �������
template <class T> class vector{
	int sz,n;			// ����������� ��� � ���-�� ���������
	T **obj;			// ������ ���������� �� �����������������
public:                 // ������� ���� T
	T *operator[](int); // �������� [int] ���������� ��������� ��
						// ����������������� ������ ������ T
	operator int();		// ���������� ������� ���������� ����������
	int append(T*);     // ���������� ��������� �� ������ ���� T
	int index(T*);		// ����� ������� ��������� �������
	vector(int);		// �����������
	~vector(){ delete []obj; } 
	};					// ����������
//---- ���������� ������� (������) ���������� ������ - ���� �������
// �������� ������� - ����� T, ���������� ��� ������
// ��� �������-�������� ��� ��������� - �����������������
template <class T> vector<T>::operator int(){ return n; }

template <class T> T* vector<T>::operator[](int k){
	return k>=n ? NULL : obj[k]; }

template <class T> int vector<T>::index(T *pobj){
	for ( int i=0; i<n; i++)
		if (pobj == obj[i]) return i;
	return -1;}

template <class T> vector<T>::vector(int sz0){
	sz=sz0; n=0; obj=new T*[sz]; }


template <class T> int vector<T>::append(T *pobj){
 if (n>=sz) return 0;
 obj[n++]=pobj;
 return 1;}

 void main(){
 vector<int> A(5);
 int B[10]={6,4,8,4,8,0,4,76,98,10},i;
 for (i=0; i<10; i++) { A.append(&B[i]); }
 for (i=0; i<5; i++) printf("%d\n",*A[i]);
 printf("[%d]\n",A.index(&B[3]));
 }
