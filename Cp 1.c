#include<stdio.h>

int main()
{
   int c=0,n;
   int a=0;
   int b=1;
   printf("Enter a number to generate fibonacci series upto nth term\n");
   scanf("%d",&n);
   printf("Fibonacci series upto %d term:-\n",n);
   while(c<=n)
   {
       printf("%d ",c);
       a=b;
       b=c;
       c=a+b;
   }
}
