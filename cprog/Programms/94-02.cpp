#include <stdio.h>
//------------------------------------------------------94-02.cpp
//----- ����� ������ � �������� ��������
 void main() {
	FILE *fd; char name[30]="94.txt" , str[80];
	int i,n,NP;						// ���������� ������� � �����
	long *POS;							// ������ ���������� ������ ������� � �����
 	if ((fd=fopen(name,"r"))==NULL) return;
	for (n=0;fgets(str,80,fd)!=NULL;n++);
	NP=n/20; if (n%20!=0) NP++;		// ���-�� ����� - ���-��-�������
	fseek(fd,0,SEEK_SET);			// ��������� � ������ �����
	POS=new long[NP];				// ������������ ������� "��������"
    for (n=0; n < NP; n++){			// �������� ������� �����
		POS[n]=ftell(fd);			// ��������� ������ ��������
		for (i=0; i<20; i++)        // ������ ����� ��������
			if (fgets(str,80,fd)==NULL) 
				break;                // ����� ����� - ����� �� �����
		if (i < 20) break;            // �������� �������� - ����� 
		}
	while(1){
	printf("page number(0..%d):",NP-1); scanf("%d",&n);
	if ((n >= NP) || (n <0)) break;
	fseek(fd,POS[n],SEEK_SET);    // ����������������� �� ��������
	for (i=0; i<20; i++) {		// ��������� ������ ��������
		if (fgets(str,80,fd)==NULL) break;
        printf("%s",str);
        }}}
