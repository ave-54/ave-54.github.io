#include <stdio.h>
//------------------------------------------------------94-03.cpp
//----- "������������������" ����������� ��������
 void main() {
	FILE *fd; char cc, name[30]="94-03.txt";
	long POS; int cnt;
 	if ((fd=fopen(name,"r+"))==NULL) return;
	while(1){
		POS=ftell(fd);				// ��������� ����� �������
		if ((cc=getc(fd))==EOF) break;
		if (cc>='0' && cc<='9'){	// ��������� �����
			fseek(fd,POS,SEEK_SET);	// ��������� �� 1 ������
			fscanf(fd,"%d",&cnt);	// � ��������� ������� - 6 ��������
			cnt++;					// ��������� �������
			fseek(fd,POS,SEEK_SET);	// ��������� �� ������ ��������
			fprintf(fd,"%06d",cnt);	// � �������� ������� - 6 ��������
			break;
			}
		}
	fclose(fd);}
