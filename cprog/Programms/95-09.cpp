#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <windows.h>
//------------------------------------------------------95-09.cpp
//---- ������ ���������� �� ������ - �������� ����������� ������
// ��� ���������� ��������� ����� � �������� ��� ��������� 95-06.cpp
struct DMUS{
	FILE *fd;						// ���� � stdio
	int sz,ns;
	long p0, *pp;					// ����� ������� �������� ����������
// �������� ����� � �������� ����������� ��������
int open(char name[]){
	if ((fd=fopen(name,"rb+"))==NULL)
		return 0;					// ����� ������/������/����������
	fread(&sz,sizeof(int),1,fd);	// ������� ����������� ��
	fread(&ns,sizeof(int),1,fd);	// ������� ���������� ����������
	fread(&p0,sizeof(long),1,fd);	// � ��������� ����� �� � �����
	pp=new long[sz];				// ������� ����� ��
	fseek(fd,p0,SEEK_SET);			// � ��������� ��� ���������� �� �����
	fread(pp,sizeof(long),sz,fd);
	return 1;
	}
// ���������� ����������� ��������
void updateSys(){
	fseek(fd,0,SEEK_SET);			// � ������ �����
	fwrite(&sz,sizeof(int),1,fd);	// �������� ���������
	fwrite(&ns,sizeof(int),1,fd); 
	fwrite(&p0,sizeof(long),1,fd);
	fseek(fd,p0,SEEK_SET);
	fwrite(pp,sizeof(long),sz,fd);	
	}
// ����������������� ������ ��� ������ �������� ����������
void extend(){
	if (ns!=sz) return;
	sz*=2;							// ��������� ����� �� � ������
	pp=(long*)realloc(pp,sizeof(long)*sz);
	fseek(fd,0,SEEK_END);			// ������������ �� ����� �����
	p0=ftell(fd);					// � �������� ����� ����� �� � �����
	updateSys();					// �������� ��������� � �� �� ����� �����
	}
// ������ �� ����������� ������
char *get(int k){
	if (fd==NULL || k>=ns) return NULL;
	fseek(fd,pp[k],SEEK_SET);
	int ll;
	fread(&ll,sizeof(int),1,fd);	// ��������� ����� ������
	char *p=new char[ll];           // ������� ������������ ������
	fread(p,ll,1,fd);				// ��������� ������ - ������
	return p;
	}
// ������� �� ����������� ������
int insert(char *s, int k){
	if (fd==NULL || k>=ns) return 0;
	extend();						// ���������� ������������
	fseek(fd,0,SEEK_END);			// ������������������ � ����� �����
	for(int j=ns-1;j>=k;j--)
		pp[j+1]=pp[j];				// �������� ��������� � �������
	ns++;
	pp[k]=ftell(fd);				// �������� ����� ����� ������
	int ll=strlen(s)+1;
	fwrite(&ll,sizeof(int),1,fd);	// �������� ������ � ������� ���
	fwrite(s,ll,1,fd);			
	return 1;
	}
// �������� �����
void close(){ updateSys(); fclose(fd); }
};

 void main(){
	DMUS FF={NULL};
	if (!FF.open("95-06.dat")) return;
	FF.insert("aaaaa\n",10);
	FF.insert("bbbbbbbb\n",5);
	for (int i=20; i>=0; i--){
	char *s=FF.get(i); if (s!=NULL) { CharToOemA(s,s); printf("[%d] %s",i,s); delete []s;}}
	FF.close();
 }
