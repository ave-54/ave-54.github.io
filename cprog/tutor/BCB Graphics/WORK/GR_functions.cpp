#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<time.h>
#include<graphics.h>

void main()
{
	// int gdriver=DETECT, gmode=VGAHI, errorcode;
	// initgraph(&gdriver, &gmode, "e:\\bc31\\bgi");
	int GraphDriver=installuserdriver("svga256",NULL); //�ࠩ��� 256 梥⮢
	int GraphMode=1,ErrorCode;
	initgraph( &GraphDriver, &GraphMode, "e:\\bc31\\bgi" );
	int errorcode = graphresult();
	if (errorcode != grOk)
	{
		printf("Graphics error: %s\n", grapherrormsg(errorcode));
		printf("Press any key to halt:");
		getch();
		return;
	}
   int maxx=getmaxx();        	// �����୮��� X
   int maxy=getmaxy();          // �����୮��� Y
   int maxcolor=getmaxcolor();  // ���-�� 梥⮢
   setfillstyle(1,BLUE);   		// �⨫� � 梥� �������
   setcolor(YELLOW);			// ���� ����� � ��祣�
   bar(0,0,maxx-1,maxy-1);		// ������� 䮭�
   settextstyle(2,0,5);			// ��� ����,,ࠧ���
   char cc[80];                 // ��ଠ�� �뢮� � ��ப�
   sprintf(cc,"%dx%d %d colors",maxx,maxy,maxcolor);
   outtextxy(maxx*0.4,maxy/2,cc);// �뢮� ��ப� � ��䨪�
   for (int j=0;j<10;j++)
   for (int i=0;i<maxcolor;i++)
		putpixel(100+i,100+j,i); // �뢮� �窨 - X,Y,梥�
   circle(200,200,10);  		 // ���㦭���� - X,Y,R
   line (10,20,300,350);         // ����� - X1,Y1,X2,Y2
   setfillstyle(2,RED);   		 // �⨫� � 梥� �������
   bar(200,300,250,360);		 // ������� ��אַ㣮�쭨��
   rectangle(210,310,260,370);	 // ��אַ㣮�쭨� 梥� �����
   setfillstyle(1,130);   		 // �⨫� � 梥� ������� ᥪ��
   setcolor(150);                // ���� ����⮢�� ᥪ��
   pieslice(350,300,45,135,50);	 // ����� - X,Y,��� � ��� 㣮�, R
   pieslice(500,300,0,360,50);	 // ����� - X,Y,��� � ��� 㣮�, R
   setcolor(YELLOW);
   arc(400,300,45,135,70);		 // �㣠 - X,Y 業��, ��� � ��� 㣮�, R
   int a[6]={400,20,450,70,430,90};
   fillpoly(3,a);				 // ���ᨢ �祪 (X,Y) � ������� ��������
   fillellipse(450,150,100,30);	 // ������� ���� X,Y,Dx,Dy
   delay(5000);
   randomize();
   while(!kbhit()){
		int x=random(maxx);
		int y=random(maxy);
		int cl;
		if ((cl=getpixel(x,y))==BLUE) putpixel(x,y,WHITE);
		else
			{
			int dx=(cl==WHITE ? 1 : 2);
			for (int i=-dx;i<=dx;i++)
			for (int j=-dx;j<=dx;j++)
				putpixel(x+i,y+j,cl);
			}
		}
   getch();
   closegraph();
}
