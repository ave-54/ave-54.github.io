#include <stdio.h>
#include <conio.h>
#include <string.h>

#define DELAY
#ifdef DELAY
#include <time.h>
// �㭪�� ����প�, ��ࠬ��� - �६� ����প� � �����ᥪ㭤��
void delay(int ms){
  unsigned long t1 = clock()/CLK_TCK*1000+ms, t2 = 0;
  while((t2 = clock()/CLK_TCK*1000) < t1);
}
#endif

// �।�������� � ���஢�� ��ப�
unsigned char C[] = "lpokmnjiuhbvgytfcxdreszawq";

int y=8;	// ����� ��ப� �� �࠭�, ��� �㤥� ���஢��

// ������� �㪢� ���� �� ��������� �࠭�
// ��ࠬ���� - ���न���� �㪢�, �㪢�, ����প�
void down(int i, int j, char c, int ms=0){
  gotoxy(i+1, y+j);
  putch(' ');
  gotoxy(i+1, y+j+1);
  putch(c);
#ifdef DELAY
  delay(ms);
#endif
}

// ������� �㪢�
void up(int i, int j, char c, int ms=0){
  gotoxy(i+1, y+j);
  putch(' ');
  gotoxy(i+1, y+j-1);
  putch(c);
  textcolor(WHITE);
#ifdef DELAY
  delay(ms);
#endif
}

// ������� �㪢� �����
void left(int i, int j, char c, int ms=0){
  gotoxy(i+1, y+j);
  putch(' ');
  gotoxy(i, y+j);
  putch(c);
  textcolor(14);
#ifdef DELAY
  delay(ms);
#endif
}

// ������� �㪢� ��ࠢ�
void right(int i, int j, char c, int ms=0){
  textcolor(12);
  gotoxy(i+1, y+j);
  putch(' ');
  gotoxy(i+2, y+j);
  putch(c);

#ifdef DELAY
  delay(ms);
#endif
}
// ����஢�� �롮஬
void Sort(unsigned char *c, int ms=0){
  int sz = strlen(c), min_i;
  int i, j;
  unsigned char min_el, temp;
  gotoxy(1, y);
  puts(c);
  for(i=0; i<sz-1; i++){			// ��६ i-�� �����
	down(i, 0, c[i], ms);			// (�� ������ ����)
	min_el = c[i];
	min_i = i;
	for(j=i +1; j<sz; j++){			// �饬 ��������� �����
	  right(j-1, 1, c[i], ms);			// �� i-⮣� (������ ��ࠢ�
						   //	 ��� ��ப��)
	  up(j, 0, c[j], ms);			// �� ��᫥�����
	  up(j, -1, c[j], ms);			// (��� ��� ��룠��)
	  up(j, -2, c[j], ms);
	  if(c[j]<min_el){
	  if (kbhit()) return;
	if(i-min_i)
	  down(min_i, -1, c[min_i], ms);	// ������ �� ���� ࠭��
						//������� ��������� �����
	min_el = c[j];
	min_i = j;
	down(j, -3, c[j], ms);			// ��������� �� ������
						//�� ����
	down(j, -2, c[j], ms);
	  }
	  else{
	down(j, -3, c[j], ms);			// �� ��������� -
	down(j, -2, c[j], ms);			// ������!
	down(j, -1, c[j], ms);
	  }
	}
	right(sz-1, 1, c[i], 4*ms);			// i-�� ����� ��室��
	right(sz, 1, c[i], 4*ms);			// 楯���
	up(sz+1, 1, c[i], 4*ms);			// �ࠢ�
	up(sz+1, 0, c[i], 4*ms);
	for(j=sz+1; j>min_i+1; j--)			// ���� ����� �� �������쭮��
	  left(j, -1, c[i], 4*ms);
	if(i-min_i)
	  left(min_i, -1, c[min_i], ms);		// ⮫���� ���
	left(min_i+1, -1, c[i], ms);
	 textcolor(WHITE);
	down(min_i, -1, c[i], ms);			// ������� �� ��� ����
	if(i-min_i){
	  for(j=min_i-1; j>i; j--)			// ��������� ������ �� ����
	left(j, -1, c[min_i], ms);		// i-⮣�
	  down(i, -1, c[min_i], ms);
	}
	temp = c[i];				// �����騩 ����� ����⮢
	c[i] = c[min_i];				// (� ��ப�, � ��
	c[min_i] = temp;				// �� �࠭�)
  }
}

// ������� �㭪��
void main(void){
  int ms=0;
#ifdef DELAY
  ms = 100;				// �᫨ ���� ����প� -
					//� ��� �� �६�
#endif
  clrscr();
  _setcursortype(0);
  Sort(C, ms);				// �����㥬
   gotoxy(1,13);
 /* puts("������ ����� ��ப�.");	// �।������ ����� ᢮� ��ப�
  gotoxy(1,15);
  char newC[81];
  _setcursortype(2);
  gets(newC);				// ������
  _setcursortype(0);
  y=20;
  Sort(newC, ms);			// �����㥬
  gotoxy(1, 24);
  puts("������ �����-����� ������...");
  getch();
  _setcursortype(2);*/
}












