#include<stdio.h>
int main()
{
    int N,A,B,C,D,E;
    while(scanf("%d",&N)!=EOF)
   {
       A=N/4;
       B=A-1;
       C=B-2;
       D=B+2;
       E=D+2;
       printf("%d %d %d %d\n",C,B,D,E);
   }
return 0;

}
