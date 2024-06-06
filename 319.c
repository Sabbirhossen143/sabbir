#include<stdio.h>
int main()
{
    int M,N,A,B,C;
    while(scanf("%d %d",&M,&N)!=EOF)
    {
       A=M-N;
       B=A*365;
       C=B%100;
       printf("%d \n%d\n",B,C);

    }
    return 0;
}
