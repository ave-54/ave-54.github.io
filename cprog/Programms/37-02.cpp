#include <stdio.h>

//--------------------------------------------37-02.cpp
// ��������� ���������: "1 ��� = 1 �����"
// "������� ���������"
void  F1(char in[]){
int i=0,k;
while (in[i]==' ')i++;
while(in[i]!=0){		// 1 ��� = 1 �����
	// ������ �����
	printf("%d\n",i);
	while (in[i]!=' ' && in[i]!=0)
		i++;
	// �����  �����
	while (in[i]==' ')i++;
	}
}



void main(){	
	char o[80];
	F1("   this is a text string");
	puts("");
}