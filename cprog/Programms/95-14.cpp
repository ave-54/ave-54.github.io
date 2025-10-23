#include <stdio.h>
#include <string.h>
#define FNULL -1l
struct ftree{
	long fl,fr;
	int sz;
};
//------------------------------------------------------95-14.cpp
//---- ���������� ����� ������� � ������ � �������� �����
 long AppendOne( char *str, FILE *fd){
	long pos;					// �������� � ���� ����� ������� ������
	ftree Elem;                 // ����� ������� - ��������� ����������
	Elem.fr=Elem.fl=FNULL;
	Elem.sz=strlen(str)+1;
	fseek(fd,0L,SEEK_END);
	pos = ftell(fd);
	fwrite(&Elem,sizeof(ftree),1,fd);
	fwrite(str, Elem.sz, 1, fd);
	return pos; }

void AppendTree(long pos, char *newstr, FILE *fd){ 
	ftree A; char *str;
	fseek(fd, pos, SEEK_SET);
	fread(&A, sizeof(ftree), 1, fd);
	str=new char[A.sz];			// ������ ������ � ������������ ������
	fread(str,A.sz,1,fd);		// � ������� ���	
	if ( strcmp(str,newstr)>0){	// ����� ���������
		if (A.fl!=FNULL){		// ���� ������� - ����������� �����
			AppendTree(A.fl,newstr,fd); 
			delete str; return;}// ����� ��� ����������
		else A.fl=AppendOne(newstr,fd);
		}						// ��� ������� - �������� � ��� ����� �������
	else {
		if (A.fr !=FNULL){
			AppendTree(A.fr,newstr,fd); 
			delete str; return; }
		else A.fr = AppendOne(newstr,fd);
	}
	fseek(fd, pos, SEEK_SET);	// �������� ������� ������� ������
	fwrite(&A, sizeof( ftree), 1, fd);
	delete str; }

 void main(){
 FILE *fd=fopen("95-14.dat","wb");
 ftree A={FNULL,FNULL,0};
 char c[]="root";
 A.sz=strlen(c)+1;
 long pp=FNULL;
 fwrite(&A,sizeof(ftree),1,fd);
 fwrite(c,A.sz,1,fd);
 fclose(fd);
 fd=fopen("95-14.dat","rb+");
 char *qq[]={"fffff","zzzzz","tttttt","qqqqqq","44444444","66666666666666",NULL};
 for (int i=0; qq[i]!=NULL; i++) AppendTree(0l,qq[i],fd);
 fclose(fd);
 }
