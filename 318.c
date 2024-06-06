#include<stdio.h>
int main()
{
    int M,N,A,B,C;
    while(scanf("%d %d",&M,&N)!=EOF)
    {
      A=N-M;
      B=3*A;
      C=A+B+M;
      printf("%d\n",C);
    }
    return 0;
}
