#include <stdio.h>
//------------------------------------------------------95-03.cpp
//  ���� ������� ������������� �����
//  ����������������� ��� �� ����������� ���������
struct BFILE{
	FILE *fd;					// ���� � stdio
	int nr,sz;					// ����� �������� ������ ����� 
int create(char *name,int sz0){	// ������� ������ ����
	if ((fd=fopen(name,"wb"))==NULL)         
		return 0;				// ������� ����� ��� ������
	int nr0=0;					// �������� ������� � �����������
	fwrite((void*)&sz0,sizeof(int),1,fd);   
	fwrite((void*)&nr0,sizeof(int),1,fd);
	fclose(fd); fd=NULL; return 1; }
// ������� ������������ ���� � ���������
int open(char *name,int sz0){
	if (fd!=NULL) return 0;				// ���� ��� ������
	if ((fd=fopen(name,"rb+"))==NULL)         
		return 0;						// ������� ��� ������ � ������
	fread((void*)&sz,sizeof(int),1,fd);	// ������ �� ����� nr � sz
	fread((void*)&nr,sizeof(int),1,fd);
	fseek(fd,0L,SEEK_END);				// ������������� �� ����� �����
	if (ftell(fd)!=
		2*sizeof(int)+(long)nr*sz)		// ��������� nr � sz?
		{ fclose(fd); fd=NULL; return 0;}
	return 1;}
// ������ ������ � �������� ������� �� ��������� �����
void *get(int i){
	if (fd==NULL) return NULL;		// ���� �� ������
	if (i<0 || i>=nr) return NULL;  // ����� ������ �����������
	void *q=new char[sz];           // �������� ������ (� ������)
	if (fseek(fd,2*sizeof(int)+i*sz,SEEK_SET)==EOF)
	  { delete []q; return NULL; }  // ������ ����������������
	if (fread(q,sz,1,fd)!=1)
	  { delete []q; return NULL; }	// ������ ������
	return q; }
// �������� ������
int append(void *pp){
	if (fd==NULL) return NULL;		// ���� �� ������
	fseek(fd,0L,SEEK_END);          // ������������ �� ����� �����
	if (fwrite(pp,sz,1,fd)!=1) 
		return 0;					// �������� ������
	nr++;							// �������� ���������� nr � �����
	fseek(fd,sizeof( int),SEEK_SET);  
	if (fwrite((void*)&nr,sizeof(int),1,fd)!=1)
		return 0;                                            
	return 1; }
};

void main(){
	BFILE FF={NULL,0,0};
	double A[]={4,6,2,8,3,4,1,5,6};
	int n=sizeof(A)/sizeof(double);
	FF.create("95-03.dat",sizeof(double));
	if (!FF.open("95-03.dat",sizeof(double)))
		return;
	int i;
	for (i=0;i<n;i++) FF.append(&A[i]);
	for (i=n-1; i>=0; i--){
		double *pd=(double*)FF.get(i);
		printf("%lf\n",*pd); delete pd;
		}
	}
