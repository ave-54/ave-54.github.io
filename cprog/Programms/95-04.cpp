#include <stdio.h>
//------------------------------------------------------95-04.cpp
//---- ���� - ������� ������������ �����������
struct cDef {						// ��������� �������
	int type;                       // ��� �������
	int size;                       // ����������� ������� � ������
	char name[30]; };				// ��� ������� 
 
struct FTABLE{
	FILE *fd;                       // ���� � stdio
	int nc;                         // ���������� ��������
	int nr;							// ���������� �����
	int lr;                         // ������ ������ �������
	long adata;                     // ��������� ����� ������� �����
	cDef *ST;                       // ������������ ������ ����������
//------ ������� ���� � ��������� ��������� �������� 
 int open(char *name) {
	int i; 
	if ((fd=fopen(name,"rb"))==NULL) return 0;
	fread(&nc,sizeof(int),1,fd);	// ������ nc
	fread(&nr,sizeof(int),1,fd);    // ������ nr
	ST= new cDef[nc];               // ������ ��� ������ ����������
	fread(ST,sizeof(cDef),nc,fd);	// ������ ������� ����������
	adata=sizeof(int)*2+sizeof(cDef)*nc;        
									// ����������� adata - ����� ������� ������ 
	for (i=0,lr=0; i<nc; i++)       // ����������� ����� ������ 
		lr += ST[i].size; 
	return 1;}
//----- ������ �������� ������� �� ������� j ������ i
void *get(int i, int j){ 
	int k,lnt;
	if (fd==NULL) return NULL;
	if (nc <=j || nr <=i) return NULL; 
	for ( k=0,lnt=0; k<j; k++)		// �������� j-�� ������� � ������
		lnt += ST[k].size;
	void *data=new char[ST[j].size];// ������ ��� ������ �������
	fseek(fd, adata+i*lr+lnt,SEEK_SET); 
									// ����� ������ ������� � �����
	fread(data,ST[j].size,1,fd); 
	return data;} 
};

void main(){
	cDef TB[3]={					// �������� ����� �� ���������� �������
		{0,sizeof(int),"INT"},		// ��������� �������
		{0,sizeof(int),"INT2"},
		{1,20,"STRING"}};
	struct my_rec{					// ������ (������) �������
		int a,b;
		char c[20];
		} DT[5]={{1,5,"aaaa"},{2,6,"bbbb"},{3,7,"cccc"},{4,8,"dddd"},{5,9,"eeeeeeeeeee"}};	
	int nc0=3,nr0=5;
	printf("%d\n",sizeof(my_rec));
	FILE *fd=fopen("95-04.dat","wb");
	fwrite(&nc0,sizeof(int),1,fd);
	fwrite(&nr0,sizeof(int),1,fd);
	fwrite(TB,sizeof(cDef),nc0,fd);
	fwrite(DT,sizeof(my_rec),nr0,fd);
	fclose(fd);
	FTABLE FF={NULL};				// ������������� ������������������ ����
	if (!FF.open("95-04.dat")) return;
	for (int i=4;i>=0;i--){
		int *p=(int*)FF.get(i,1);
		int *q=(int*)FF.get(i,0);
		char *s=(char*)FF.get(i,2);
		printf("[%d] %d %d %s\n",i,*q,*p,s);
		delete p;
		delete q;
		delete []s;
		}
}