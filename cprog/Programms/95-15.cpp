#include <stdio.h>
//------------------------------------------------------95-15.cpp
//--------- ����������� ������ � �����. ������������ ��������.
 #define FNULL -1L
 struct flist {			// ����������� �������� ������ � �����
 int val;				// �������� �������� ������
 long fnext;			// �������� ��������� �� ��������� �������
 };						// ��� ������������ ������ flist *next �� �����
 
 void show(FILE *fd)			// �������� ������
 { flist cur;					// �������� ��������� �������� ��������
 long fcur;                     // ������� ������� 
 fseek(fd,0L,SEEK_SET);
 fread(&fcur,sizeof(long),1,fd);// ��������� ��������� �� ������
      for (; fcur!=FNULL; fcur=cur.fnext) { 
      fseek(fd,fcur,SEEK_SET);  // �������� �������� ��������
      fread(&cur,sizeof(flist),1,fd);
	  printf("%d ",cur.val);
	  } puts(""); }
								// ��������� � ����������� ���������������
 void ins_sort(FILE *fd, int vv) {
 flist cur,prev,lnew;			// ������� � ���������� � ����� �������� ������
 long fnew,fcur,fprev;          // �������� ��������� ��������� ������
 fseek(fd,0L,SEEK_SET);
 fread(&fcur,sizeof(long),1,fd);
 for (fprev=FNULL; fcur!=FNULL;
 fprev=fcur, prev=cur, fcur=cur.fnext)
	  {									// ������� � ����������
	  fseek(fd,fcur,SEEK_SET);			// � ������������ �����������
	  fread(&cur,sizeof(flist),1,fd);	// �������� � ��� ������
	  if (cur.val > vv) break;			// ����� ����� - ������� > ������
	  }
 lnew.val = vv;
 lnew.fnext=fcur;
 fseek(fd,0L,SEEK_END);				// ���������� ������ �������� ������
 fnew=ftell(fd);					// ������ � ���� � ��������� ������
 fwrite(&lnew,sizeof(flist),1,fd);
	  if (fprev==FNULL) {           // ��������� ������ -
	  fseek(fd,0L,SEEK_SET);        // �������� ���������
	  fwrite(&fnew,sizeof(long),1,fd);
	  }
	  else {                        // ��������� ����� ����������� -
	  prev.fnext=fnew;              // �������� ����������
	  fseek(fd,fprev,SEEK_SET);
	  fwrite(&prev,sizeof(flist),1,fd);
	  }}

 void main(){
 FILE *fd=fopen("95-15.dat","wb");
 long pp=FNULL;
 fwrite(&pp,sizeof(long),1,fd);
 fclose(fd);
 fd=fopen("95-15.dat","rb+");
 int A[]={4,78,3,4,65,2,3,56,7};
 for (int i=0; i<sizeof(A)/sizeof(int); i++) ins_sort(fd, A[i]);
 show(fd);
 }
