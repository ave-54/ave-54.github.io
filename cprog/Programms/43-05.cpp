#include <stdio.h>
#include <math.h>
//------------------------------------------------------43-05.cpp
//--- ���������� �������� ������� sin ����� ��������� ���
 double sum(double x,double eps,int &n){
 double s,sn;			// ����� � ������� ��������� ����
      for (s=0., sn = x, n=1; fabs(sn) > eps; n++) {
      s += sn;
      sn = - sn * x * x / (2.*n * (2.*n + 1));
      }
 return s;}
 // ���������� ���������� ���� ��� x � ��������� �� 0.1 �� 1 � ����� 0.1
 void main(){
 double x,y;
 int nn;
 for (x=0.1; x <= 1.; x += 0.1){
	y=sum(x,0.0001,nn);
	printf("n=%d x=%0.1lf\t sum=%0.4lf\t sin=%0.4lf\n",nn,x,y,sin(x));
	}
 }
