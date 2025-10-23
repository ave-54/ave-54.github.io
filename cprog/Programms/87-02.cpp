#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>
//--------------------------------------------------------------87-02.cpp
// ����������� - ������ ������������� ������
struct cell{			// ������ ���-������� - ������� ������
	int ckey;			// �������� �����
	cell *next;
};
struct HASH{			// ��������� �� ����������� ���������
	cell **hash;		// ���-������� - ������ ���������� �� ������
	int POW,sz;			// ����������� ������� sz=10^POW
	int KSIZE,w;		// ����������� ����� (���-�� ����) w=10^KSIZE
	int s1;				// ������� �����, ��������� �� sz
void reset(){			// ���������� ���-�������
	cell *p,*q;
	for (int i=0;i<sz;i++)
		for (p=hash[i];p!=NULL;){
			q=p; p=p->next; delete q;
			}
	delete []hash;
	}
void init(int p0, int ksz0){
	int i;
	srand(time(NULL));
	POW=p0;
	sz=pow(10,(double)POW);
	KSIZE=ksz0;
	w=pow(10.,KSIZE);
	for(s1=sz+1;1;s1++){// ������� �����, ��������� �� sz
		for (i=2;i<s1 && s1%i!=0;i++);
		if (i==s1) break;
		}
	hash=new cell*[sz];
	for (int i=0;i<sz;i++) hash[i]=NULL;
	}
// ���-������� - ������� �� ������� �� s1
int hash_fun(int key){ return (key%s1) %sz; }
void insert(int val){
	int v=hash_fun(val);
	cell *q;
	for (q=hash[v];q!=NULL;q=q->next)
   		if (q->ckey==val) break;
	if (q==NULL)			// �������� � ������� ���
   		{
		q=new cell;			// ������� � ������ ������
		q->ckey=val;
		q->next=hash[v];
		hash[v]=q;
		}
	}
void show(){
	int cnt=0,cnt1=0;
	for (int i=0;i<sz;i++){
		printf("\n[%d]=",i);
		if (hash[i]!=NULL){
			cnt++;
			for (cell *q=hash[i]; q!=NULL; q=q->next,cnt1++)
				printf("%d ",q->ckey);
		}}
	printf("\nT=%lf\n",(double)cnt1/cnt);
	getch();
	}
void load_rand(double proc){ // ������� �������� �������
	for (int i=0;i<sz*proc;i++)
		insert(rand()%w);
	}
};

void main(){
	HASH TB;
	TB.init(2,4);
	TB.load_rand(0.50);	TB.show();
	TB.load_rand(0.25);	TB.show();
	TB.load_rand(0.10);	TB.show();
	TB.load_rand(0.05);	TB.show();
	TB.load_rand(0.05);	TB.show();
	TB.load_rand(0.05);	TB.show();
}
