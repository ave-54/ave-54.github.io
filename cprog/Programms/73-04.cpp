//------------------------------------------------------73-04.cpp
//------ ������� � ��������� ("��� ����� � ������ �������")
#include <stdio.h>
#include <conio.h>
#define N 100
char LB[N][N];
// ������������ ������� - ������� ���������� (x,y) � ���������� (dx,dy)
int step(int y,int x, int dy, int dx){
int c;
switch(LB[y][x]){						// ����� ������� ����������� ��������
case 'O':	throw 1;		            // ������ ����� - �������� ����� (����������)
case ' ':	LB[y][x]='.';				// ��������� ������������ - ��������� � �������
			step(y+dy,x+dx,dy,dx);		// ����������� � �������� ����������� ����
			LB[y][x]=' ';				// ���� ��������� - �������� ���������� ����
			break;
case '.':	LB[y][x]='+';				// ����������� � ����� (� �����������������
			step(y+dy,x+dx,dy,dx);		// ����������� - ���������� �����������
			LB[y][x]='.';
			break;
case '*':	LB[y][x]='\\';				// ����������������� ������� - 
			c=dx; dx=dy; dy=c;			// ��� �������� ���������� �
			step(y+dy,x+dx,dy,dx);		// ��������������� ������ �����������
			dx=-dx; dy=-dy;				// �������� ����.
			LB[y][x]='/';
			step(y+dy,x+dx,dy,dx);		// ���� ��������� - ������������ 
			LB[y][x]='*';				// "����������������� �������"
			break;
case '\\':	c=dx; dx=dy; dy=c;			// ��������� �� ���������������� �������
			step(y+dy,x+dx,dy,dx);		// (� �������� �������)
			break;						// - ���� ������� ��������������� ����
case '/':	c=dx; dx=dy; dy=c;
			dx=-dx; dy=-dy;
			step(y+dy,x+dx,dy,dx);
			break;
	} return 0; }

void main(){
int i,j,k;
FILE *fd=fopen("73-04.txt","r");
if (fd==NULL) return;
for (k=0;k<N && fgets(LB[k],N,fd)!=NULL;k++);
for (i=0; i<k; i++) printf("%s",LB[i]);
for (j=0; j<k && LB[0][j]!='I'; j++);
if (j==N) return;
LB[0][j]=' ';
try	{
	step(0,j,1,0);
	}
catch(int n){
	for (i=0; i<k; i++) printf("%s",LB[i]);
	}
}
