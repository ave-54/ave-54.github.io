#include <stdio.h>
//-------------------------------------------------45-04.cpp
// ������ ������������������� ��������� ��������
double F1(char c[]){
	FILE *fd=fopen(c,"r");		// ������� ����
	if (fd==NULL) return 0;
	double s=0;
	while(1){					// ���� ������ ������������������
		int v;
		double dd;
		fscanf(fd,"%d",&v);		// ������ ��������� ��������
		if (v==0) break;		// ������������ - 0 
		if (v>0) s+=v;			// ���� >0 - �������� � �����
		else{					// ���� <0 - ������ ���������
			fscanf(fd,"%lf",&dd);
			s+=dd;				// �� ��� - ������������
			}}
		fclose(fd); return s;}
//----------------------------------------------
int F2(char c[],int d[]){
	FILE *fd=fopen(c,"r");		// ������� ����
	if (fd==NULL) return 0;
	double s=0;
	int n=0;
	while(1){					// ���� ������ ������������������
		int v;
		double dd;
		fscanf(fd,"%d",&v);		// ������ ��������� ��������
		if (v==0) break;		// ������������ - 0
		if (v>0) d[n++]=v;		// ���� >0 - �������� � ������
		else{
			int k=-v;			// ���� <0 - ������� ����������
			fscanf(fd,"%d",&v);	// ��������� �������� - �������������
			while(k--!=0)		// ���� ����������� ��������������
				d[n++]=v;		// ��������
			}}
		fclose(fd); return n;}
void main(){
	printf("F1=%lf\n",F1("45-041.txt"));
	int dd[100];
	int k=F2("45-042.txt",dd);
	for (int i=0; i<k; i++) printf("%d ",dd[i]);
	}