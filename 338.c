#include<stdio.h>
int main()
{
 float C;
 double R,A,pi = 3.1416;

 while(scanf("%f",&C)!=EOF)
 {
   if(C <= 1000)
   {
       A=(2*pi);
       R=C/A;

       printf("%.2lf\n",R);
 }
 }
 return 0;
}

