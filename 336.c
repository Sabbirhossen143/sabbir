#include<stdio.h>
int main()
{
 int r,R;
 double A,B,C;
 while(scanf("%d %d",&r,&R)!=EOF)
 {
   A=3.1416*(r*r);
   B=3.1416*(R*R);
   C=B-A;
   printf("%.2lf\n",C);
 }
 return 0;

}
