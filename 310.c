
#include<stdio.h>
int main()
{
    int N,A,B,C,D,E;
    while(scanf("%d",&N)!=EOF)
   {
       A=N/5;
       B=A-2;
       C=B-2;
       D=A+2;
       E=D+2;
       printf("%d %d %d %d %d\n",C,B,A,D,E);
   }
return 0;

}
