#include<stdio.h>
int main()
{
 int A,H;
 double b,h,a,c,area;

 while(scanf("%d %d",&A,&H)!=EOF)
 {
   b=A;
   h=H;
   a=2*b;
   c=a+b;
   area =(c*h)*0.5;


   printf("%.2lf\n",area);
 }
 return 0;
}
