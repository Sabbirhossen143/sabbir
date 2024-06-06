#include<stdio.h>
int main()
{
   int T,M;
   double A,B,C,D,E,F,G,H;
   scanf("%d %d",&T,&M);

   A=T;
   B=A/4;

   C=M;
   D=C/B;
   E=(2*C)/B;
   F=(3*C)/B;
   G=(5*C)/B;
   H=D+E+F+G;

   printf("%.2lf\n",H);

   return 0;
}
