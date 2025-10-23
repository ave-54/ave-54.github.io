#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <locale.h>
#include <windows.h>

//--------------------------------------------------------------------------
// ����� ������� � ��������� ��������� ��� "����"
class MouseEvent{
public:	int x,y;
		MouseEvent(int x0,int y0){ x=x0; y=y0; }
	};
class MouseListener {		// ����� (���������) C�������� (������� � �����������)
public:
	virtual void mouseClicked(MouseEvent ee)=0;
	};
//--------------------------------------------------------------------------
// ����� ������� � ��������� ��������� ��� "��������"
class ActionEvent{			// ���� � ������ - Action
public:	
	char *name;
	ActionEvent(char *ss){ name=ss; }
	};
class ActionListener {		// ����� (���������) C�������� (������� � �����������)
public:
	virtual void actionPerformed(ActionEvent ee)=0;
	};
//---------------- ������� ������ � �� USER'��------------------------------
class Component{
public:
	int x,y,w,h;
	Component(){ 
		x=y=h=w=0; 
		ml=NULL; 
		al=NULL;				// ������������ ���
		}
	void setSize(int x0,int y0,int w0,int h0){
		x=x0; y=y0; h=h0; w=w0;
		}
	virtual int inside(int xx,int yy){
		return xx>=x && xx<=x+w && yy>=y && yy<=y+h;
		}
	virtual void paint()=0;
	MouseListener *ml;			// ������-���������� ������� ���� "����"(� ��� �����)
	ActionListener *al;			// ������-���������� ������� ���� "��������"(� ��� �����)
	virtual void MouseClick(int xx,int yy)=0;
	};
//===========================================================================
class Button : public Component{
	char *label;
public:
	Button(char *s){ label=s; }
	void paint(){
		printf("������ ������ [%s] %d %d (%d,%d)\n",label,x,y,w,h);
		}
	void addActionListener(ActionListener *ff){ al=ff; }
	void addMouseListener(MouseListener *ff){ ml=ff; }
	void MouseClick(int xx,int yy){
		if (al!=NULL) al->actionPerformed(ActionEvent(label));
		else if (ml!=NULL) ml->mouseClicked(MouseEvent(xx,yy));
		}
	};
class TextField : public Component{
	int sym;
public:
	TextField(int ns){ sym=ns; }
	void paint(){
		printf("������ ��������� ���� [%d] %d %d (%d,%d)\n",sym,x,y,w,h);
		}
	void addMouseListener(MouseListener *ff){ ml=ff; }
	void MouseClick(int xx,int yy){
		if (ml!=NULL) ml->mouseClicked(MouseEvent(xx,yy));
		}
	};
//=========================================================================
class Frame{
	Component **ctrl;		// ������� ���������� � ���� - ���
	int nc,sz;
public:
	Frame(){
		setlocale(LC_ALL,"Russian");
		ctrl=new Component*[20];
		nc=0;
		sz=20;
	}
	void add(Component *p){
		if (nc==sz){ sz*=2; ctrl=(Component**)realloc(ctrl,sz*sizeof(Component*)); }
		ctrl[nc++]=p;
	}
	virtual void paint(){
	// ������� ������ + ���������� ��������� ����������
	// ������� - �������� USER
		puts("����������� ����");
		for (int i=0;i<nc;i++) ctrl[i]->paint();
	}
	// ������� �� ���� �� - ��������� ������� �� ����
	void loop(){
		while(1){
		char c=getch();
		if (c==' ') return;
		if (c=='c') paint();	// ����������� ������ == ����� � ��
		if (c=='m') {			// ����
			printf("���������� ����:");
			int xx,yy;
			scanf("%d%d",&xx,&yy);	// �������� �������� !!!!!!!!!!!!
			for (int i=0;i<nc;i++){
				if (ctrl[i]->inside(xx,yy)) {
					ctrl[i]->MouseClick(xx,yy);
					}
				}
			//---------------------
			}
		}}};
//========================================================================
// ��������� ������� - ������� ����������� � �������������� �����������
// (����� ��� ������ + ������ ������)
//=========================================================================
class MyFrame : public Frame,public ActionListener{
public:
	//--------------------------------------------- ��������� �����-�������
	class adapter_F1 : public ActionListener{
	MyFrame *pp;							// ��������� �� ����, � ������� ��������
public:
	adapter_F1(MyFrame *p0){ pp=p0; }			// ��� �������� - ���������� ��������� �� ����
	void actionPerformed(ActionEvent ee){ pp->F1(ee); }
											// ��� ������ � �������� ����������� �������
	};
	class adapter_F2 : public ActionListener{
	MyFrame *pp;							// ��������� �� ����, � ������� ��������
public:
	adapter_F2(MyFrame *p0){ pp=p0; }			// ��� �������� - ���������� ��������� �� ����
	void actionPerformed(ActionEvent ee){ pp->F2(ee); }
											// ��� ������ � �������� ����������� �������
	};
	//---------------------------------------------------------------------------------
	// ���������� ���������������� - ����������� �������
	void paint(){
		Frame::paint();			// ���� ������� ������ ���
		puts("����������� �������");
	}
	MyFrame(){
		Button *b1=new Button("����");		// ������� ������
		b1->setSize(100,200,50,20);
		add(b1);							// �������� ����
		b1->addActionListener(this);		// ���������� - ���� ����
		b1->addActionListener(new adapter_F1(this));
		b1=new Button("����");				// ������� ������
		b1->setSize(100,230,50,20);
		add(b1);							// �������� ����
		b1->addActionListener(this);
		b1->addActionListener(new adapter_F2(this));
		TextField *t1=new TextField(10);	// ������� �����
		t1->setSize(100,250,100,20);
		add(t1);							// �������� ����
		}
	//================================================================
	//  ������-���������� = ���� ���� - ���������� ������� �� ���� ����������
	void actionPerformed(ActionEvent ee){
		printf("��������� � ���� ������� %s\n",ee.name);
	}
	// ������ ���� 2 ������-��������
	void F1(ActionEvent ee){
		printf("��������� � F1 ������� %s\n",ee.name);
	}
	void F2(ActionEvent ee){
		printf("��������� � F2 ������� %s\n",ee.name);
	}
};

//===================================================================

void main(){
	MyFrame  X;	
	X.loop();			// ���������� �������
}