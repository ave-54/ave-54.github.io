#include <stdio.h>
//-------------------------------------------------95-05.cpp
// ������������ ��������� � ����� �� ������ ������
void main(){
FILE *fd=fopen("95-05.dat","wb");
char k=10,m=6;
short A[10]={6,3,7,3,4,8,300,5,23,64};
int   B[6]={6,3,7,3,56,34};
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
fd=fopen("95-05.dat","rb");
fread(&p,sizeof(long),1,fd);	// ������ ��������� - ����� �������
fseek(fd,p,SEEK_SET);			// ���������������� - ������� �� ���������
char m1;
fread(&m1,1,1,fd);				// ������ ����� - ��������
int *qq=new int[m];				// �������� � ������ �� �� �����
fread(qq,sizeof(int),m,fd);	
for (int i=0;i<m;i++) printf("%d ",qq[i]);
delete []qq;
}