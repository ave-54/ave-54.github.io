#include <stdio.h>
//-------------------------------------------------94-00.cpp
// ������������ ����� ��� ������ �����
void main(){
FILE *fd=fopen("94-00.dat","wb");
char k=10,m=4;
short A[10]={6,3,7,3,4,8,300,5,23,64};
int   B[4]={6,3,7,3};
long p=0,offset;
fwrite(&p,sizeof(long),1,fd);	// ������ ����� ��� ���������
fwrite(&k,1,1,fd);				// �������� ���� ���� - �������
fwrite(A,sizeof(short),k,fd);	// �������� ������ �������� ����� (2B)
p=ftell(fd);					// �������� �������� ���������	
fwrite(&m,1,1,fd);				// �������� ���� ���� - �������
fwrite(B,sizeof(int),m,fd);	// �������� ������ �����
fseek(fd,0,SEEK_SET);			// � ������ �����
fwrite(&p,sizeof(long),1,fd);	// �������� ��������� �� ������ ������
fclose(fd);
}