//------------------------------------------------------74-03.cpp
#include <stdio.h>
#include <string.h>

//----- �������� ��������� (������� � ������� �����)
char *w[]={"sinus","prefix","setup","plintus","drop",NULL};
 // k - ����� ����
 void step(int k){	
 if (w[k+1]==NULL) throw 1;					// ��� ����� ������� - �����
 int l=0; if (k!=-1) l=strlen(w[k])-1;		// ����� �� ������� ����������� �������
 for (int n=k+1; w[n]!=NULL;n++)			// ����� ����������
    if (k==-1 || w[k][l]==w[n][0]){			// ���������� �������� ��� ������ �����
		char *q=w[k+1]; w[k+1]=w[n]; w[n]=q;// ����� ���������� �� ��������� ��...
		step(k+1);							// ������� ������� ������� �� ������ �����
		q=w[k+1]; w[k+1]=w[n]; w[n]=q;		// �������� ����� ��� ����������� ������
		}}
 void main(){
	 try { step(-1); }
	 catch(int v){ 
		for (int s=0,i=0; w[i]!=NULL; i++){
		for(int j=0;j<s;j++) putchar(' ');
		s+=strlen(w[i])-1;
		puts (w[i]); 
	 }}}
