//------------------------------------------------------42-05.cpp
//--------------------------------------------------------
 int test(int a){
	  int n,k,i;
 for (n=a; n!=0; n/=10){
	  k=n%10;
      if (k==0) break;                                    // ����� - 0
	  if (k==1) continue;                                 // ����� - 1
      for (i=2; i<k; i++)
           if ( k%i==0) break;                     // ����� �� �������
      if (k!=i) break;                             // ����� �� �������
      }
 if (n==0) return 1;                     // ����� �� ����� ��� break -
 return 0; }                                     // ��� ����� �������.

 #include <stdio.h>
 void main(){
 printf("test(1357)=%d\n",test(1357));
 printf("test(1457)=%d\n",test(1457)); }
