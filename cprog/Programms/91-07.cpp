#include <stdio.h>
//------------------------------------------------------91-07.cpp
//-------- ���������� � ������ ������� (����)
 long getbit(char c[], int &n) { //c[] - ������ ������, n - ����� �������
 int nb = n/8;                   // ����� �����
 int ni = n%8;                   // ����� ������� � �����
 n++;
 return (c[nb]>>ni) & 1; }       //�������� � �������� � ��������
 void putbit(char c[], int &n, int v ){
 int nb = n/8;
 int ni = n%8;
 n++;
 c[nb] = c[nb] & ~(1<<ni) | ( (v&1) << ni);}
//------- ���������� ����� �������� �����������
unsigned long getword(char c[], int &n, int sz) {
unsigned long v = 0;			// int sz - ���������� ��������
for(int i = 0; i<sz; i++) v |= getbit(c, n)<<i;
return v; }
void putword(char c[], int &n, int sz, long v){
while(sz--!=0)					
	  { putbit(c, n, v&1); v>>=1;}}
//---- �������� � ���������� ���������� ��������� �����������
 void unpack(char c[]){
 int n=0; int vv;
      while(1){
      int mode=getword(c,n,2);			// ���������� 2-���������� ����
	   switch(mode){					// ������������ �� ���� ����������
      case 0: return;
      case 1: vv=getword(c,n,8); break; // 01 ������� 8-��������� (����)
      case 2: vv=getword(c,n,16);break;	// 10 ������� 16-���������
      case 3: vv=getword(c,n,32);break;	// 11 ������� 32-���������
	   } printf("%d\n",vv);
      }}
 void pack(char c[]){
 int n=0; int vv;
      do { scanf("%d",&vv);
      if(vv==0) putword(c,n,2,0);		// ������ 2-���������� ���� 00
      else
      if (vv < 256) {
	   putword(c,n,2,1);				// ������ 2-���������� ���� 01
	   putword(c,n,8,vv);}				// ������ 8-���������� ���� �����
      else
      if (vv < 32768) {
	   putword(c,n,2,2);				// ������ 2-���������� ���� 10
	   putword(c,n,16,vv);}				// ������ 16-���������� ���� �����
	   else {
	   putword(c,n,2,3);				// ������ 2-���������� ���� 11
	   putword(c,n,32,vv);}				// ������ 32-���������� ���� �����
      } while (vv!=0); }

void main(){ char cc[100]; pack(cc); unpack(cc); }
