//------------------------------------------------------44-12.cpp
//---- ����� ����� ������������ ����� ������������ ���������
	   // ������� ���������� ������ ������ ����� ��� 1, ���� ��� ����
 int find(char s[]) {
 int i,n,lmax,imax;
	  for (i=0,n=0,lmax=0,imax=-1; s[i]!=0; i++){
	  if (s[i]!=' ') n++;            // ������ ����� ��������� �������
		   else {                    // ����� ������� ��������
				if (n > lmax) { lmax=n; imax=i-n; }
		   n=0;                     // �������� ������������� ��������
		   }}						// �� �� ����� ��� ���������� �����
 if (n > lmax) { lmax=n; imax=i-n; }
 return imax; }

 #include <stdio.h>
 void main(){
 char cc[]="aaaaaaa ss  ddddddddddd";
 printf("max word=%s\n",cc+find(cc));
 }
