//------------------------------------------------------46-15.cpp
//------- ������� ����������� �������
#include <math.h>
#include <stdio.h>
void sort(int a[], int n);		// ����� ���������� ����������� �������

void big_sort(int A[], int N){
int max=A[0],i,j,k,n=sqrt((double)N);
	if (n*n!=N) n++;
int **B=new int*[n];
	for (i=0; i<n; i++) B[i]=new int[n];
	for (i=0; i<N; i++) {
		B[i/n][i%n]=A[i];
		if (A[i]>max) max=A[i];			// �������������
		}
	for (j=N; j<n*n;j++)				// ���������� "������"
		B[j/n][j%n]=max+1;
	for (i=0; i<n; i++) sort(B[i],n);	// ���������� ������
	for (i=0; i<N; i++){                // �������
	for (k=0, j=0; j<n; j++)			// ������ ������ � ����������� 
		if (B[j][0] < B[k][0]) k=j;     // ���������� B[k][0]
	A[i] = B[k][0];                     // ������� ��������
	for (j=1; j<n; j++) 
		B[k][j-1]=B[k][j];				// ����� ��������� ������
	B[k][n-1]=max+1;                    // ������ ������������
	}
for (i=0; i<n; i++) delete []B[i];
delete []B;
}

#include <stdlib.h>
#include <time.h>
void main(){
int i,n=1000,*a=new int[n];
srand(time(NULL));
for (i=0; i<n; i++) a[i]=rand()%1000;
big_sort(a,n);
for (i=0; i<n; i++) printf("%d ",a[i]);
puts("");
}


//------���������� ������� "��������"
 void sort(int A[], int n){
 int i,found;                                  // ���������� ���������
      do {                                    // ��������� ��������...
      found =0;
      for (i=0; i<n-1; i++)
                if (A[i] > A[i+1]) {               // �������� �������
           int cc = A[i]; A[i]=A[i+1]; A[i+1]=cc;
           found++;                            // ����������� ������� 
           }
      } while(found !=0); }               //...���� ���� ������������ 
