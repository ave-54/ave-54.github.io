 #include <stdio.h>
 #include <math.h>
//------------------------------------------------------43-03.cpp
//---- ������ ������� �� ������ ���������������� �����������
 double find(double x, double eps , double (*pf)(double)){
		// ��������� ��������, �������� � ��������� �� ������� �������
 double x1,dd;
 int n=0;
 dd = 100.;
	  do {
	  x1 = x; n++;
	  x = (*pf )(x1) + x1;
	  printf("n=%d x=%lf y=%lf dx=%lf\n",n,x1,(*pf)(x1),fabs(x1-x));
//	  if (fabs(x1-x) > dd )
//		   return 0.;				// ������� ����������
	  dd = fabs(x1-x);
	  }
 while (dd > eps);
 return x; }                        // ����� - �������� �����

void main(){
double x=find(5,0.01,cos);
printf("cos(%lf)=%lf\n",x,cos(x));
}
