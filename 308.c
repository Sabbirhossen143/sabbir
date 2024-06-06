#include<stdio.h>
int main()
{
    int N,A,B,C;
    while(scanf("%d",&N)!=EOF)
    {
      A=N/3;
      B=A-1;
      C=A+1;
      printf("%d %d %d\n",B,A,C);
    }
    return 0;
}
