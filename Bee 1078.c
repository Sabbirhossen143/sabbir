#include<stdio.h>

int main()
{
    int N,i,A=0;
    scanf("%d",&N);
    for(i=1;i<=10;i++)
    {
       A=i*N;
       printf("%d x %d = %d\n",i,N,A);
    }
    return 0;
}
