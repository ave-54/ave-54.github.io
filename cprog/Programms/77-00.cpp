#include <stdio.h>
#include <string.h>
//----------------------------------------------------------77-00.cpp
// ������������ ���������������� - ����� ���������������������

int **D,N,s1,s2,cnt=0, cnt2=0;
//char A[]="ababaaaababababaaabababaaaaaaa";
//char B[]="abbbbabaaabaaabababaaabaabaaaaaabaaababa";
char A[]="abcbcaab";
char B[]="aacbacb";
double Proc=50;

int F(int k1, int k2){				// k1,k2 - ��������������� ����� �����
	int v=0;
	cnt++;							// ������� ����������� �������
	//printf("+(%d,%d)=%d\n",k1,k2,v);
	if (k1==0 || k2==0) return 0;	// ���� �� ����� ��������� - ����� ����� =0
	if (k1<N && k2<N && D[k1][k2]!=-1){
		cnt2++; return D[k1][k2];	// ��������� ����� ��� ���������� �������
		}							// ���� ���� ��������� - ��������� ���
	if (A[s1-k1]==B[s2-k2]) v=F(k1-1,k2-1)+1;
	else{							// �� ��������� - ��� �������� ������������
		int v1=F(k1,k2-1);			// � ������� �������
		int v2=F(k1-1,k2);
		v=(v1>v2 ? v1 : v2);
		}
	if (k1<N && k2<N) D[k1][k2]=v;	// ��������� ����� �������
	//printf("-(%d,%d)=%d\n",k1,k2,v);
	return v;
	}

void main(){
	N=0;								// ������� ����������� �������
	int i,j;
	D=new int*[N];
	for (i=0;i<N;i++){
		D[i]=new int[N];
		for (j=0;j<N;j++) D[i][j]=-1;
		}
	cnt=cnt2=0;
	s1=strlen(A);
	s2=strlen(B);
	int v=F(s1,s2);
	printf("v=%d N=%d cnt1=%d cnt2=%d\n",v,N,cnt,cnt2);
	}