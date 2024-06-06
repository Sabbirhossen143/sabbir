#include<stdio.h>
int main()
{
 int A,N,P,C,ch;
 while(scanf("%d %d %c",&N,&P,&ch)!=EOF)
 {
      A=(N*P);
      C=A/100;
      printf("%d\n",C);

 }
 return 0;
}

