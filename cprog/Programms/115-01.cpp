#include <stdio.h>
#include <conio.h>
#include <time.h>

//--------------������ ������ �������, ���������� ������ ��������
template <class T> class queue{			
public:
	struct elem{
	T *data;
	elem *next;
	elem(T *s){ data=s; next=NULL;}
	};
elem *fst,*lst;
queue(){  fst=lst=NULL;}
~queue(){
	 elem *q;
	 while(fst!=NULL){
		 q=fst; fst=fst->next;
		 delete q;
		}}
T *out(){
	if (fst==NULL) return NULL;
	elem *q=fst;
	fst=fst->next;
	T *foo=q->data;
	delete q;
	return foo;}
void in(T *s){
	elem *q=new elem(s);
	if (fst==NULL) fst=lst=q;
	else { lst->next=q; lst=q; }
	}
void remove(T *s){			// �������� ������� �� �������
	elem *q;
	if (fst==NULL) return;	// �� �������� ������
	if (fst->data==s) out();
	else {
		for (q=fst; q->next->data!=s; q=q->next);
		if (q->next==lst) lst=q;
		q->next=q->next->next;
		}
	}
};

struct mes{
	int		type;			// ��� ���������
	long	value;			// �������� ���������
	void	*addr;			// ����� ������
	mes(int t0, long v0=0, void *a=NULL)
		{ type=t0; value=v0;  addr=a; }
	};

#define wasBorn 0			// ��������� - ������� �������
#define killMe  1			// ��������� - ���������� �������
#define keyBrd  2			// ��������� �� ����������

class programm0{			// ������ ������ "���������" - ������� ���������
public:
	queue<mes> M;
	};

class process{				// ����� "�������" - ��������� ������� "���������"
	programm0 *prg;
public:						// �����������: ������� ����������� ����������
	process(programm0 *p0=NULL){
		prg=p0;				
		send(wasBorn,0,this);
	}						// �����������: ������� ����������� ���������
	process(process *parent){
		prg=parent->prg;
		send(wasBorn,0,this);
	}
	void send(int t0,long v0=0,void *a0=NULL){ prg->M.in(new mes(t0,v0,a0)); }
							// ����������� ������� ��������� ���������
	virtual int procMes(mes &m){ return 0; }
	virtual ~process(){}
	};

class programm : public programm0{	
	queue<process> P;		// ����� "���������" - ������� ���������
public:
	void run(){				// ��������� ���������
		while(1){			// ��������� �� ��������� - ����������
		M.in(new mes(keyBrd,getch()));
		mes *mm;			// ���� ������� ��������� �� �����
		while((mm=M.out())!=NULL){	
			printf("type=%d val=%ld addr=%lx\n",mm->type,mm->value,mm->addr);
							// ��������� � ���������� ��������
							// ��������� � �������
			if (mm->type==wasBorn)P.in((process*)mm->addr);
			else
			if (mm->type==killMe) {
							// ��������� �� ����������� ��������
							// ������� �� ������� � ���������� ������
				process *q=(process*)mm->addr;
				P.remove(q);
				delete q;
				}
			else			// ����� - ���������� ����� ��� ��������
			for (queue<process>::elem *q=P.fst; q!=NULL; q=q->next)
				if (q->data->procMes(*mm)) break;
			delete mm;
			}}}
	};

// ��������� �������. ��� ��������� '-' ������ ���������� ����,
// ��� ��������� '?' - �������� � ����
class PRC2 : process{
public:
	PRC2(process *pp):process(pp){}
	int procMes(mes &m){		
		if (m.type==keyBrd){
			if  (m.value=='-') { send(killMe,0,this); return 1; }
			if  (m.value=='?') { printf("A am %lx\n",this); }
			}
		return 0;
		}};
// ��������� �������. ��� ��������� '+' ��������� ��������� �������
class PRC1 : process{
public:
	PRC1(programm *pp):process(pp){}
	int procMes(mes &m){
		if (m.type==keyBrd){
			if  (m.value=='+') new PRC2(this);
			}
		return 0;
		}};

void main(){		// �������� ���������
	programm P;		// ���������� ������ "���������"
	new PRC1(&P);	// ������� "�������" � ���������� ��� � "���������" 
	P.run();		// �������� ����� "run" � ���������
	}
