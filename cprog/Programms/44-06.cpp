//------------------------------------------------------44-06.cpp
//---- ������������ ������ ������ " {" ��� ������ ����� ���������� ����
      int find(char c[]){
      int i;                              // ������ � ������
      int b;                              // ������ ������������ " {" 
           for (i=0, b=-1; c[i]!=0; i++){
           if (c[i]== '}' ) return b;
           if (c[i]== '{' ) b=i;
           }
      return b;}

 #include <stdio.h>
 void main(){
 char cc[80]="gggg{dd{ggg}dd{ff{y{*}y}ff}d}";
 puts(&cc[find(cc)]);
 while(1);
 }
