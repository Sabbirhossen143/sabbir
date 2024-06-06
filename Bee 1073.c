#include<stdio.h>

int main()
{
    int N,i,sum=0;
    scanf("%d",&N);
    for(i=2;i<=N;i=i+2)
    {
      sum=(i*i);
        printf("%d^2 = %d\n",i,sum);
    }

    return 0;
}

