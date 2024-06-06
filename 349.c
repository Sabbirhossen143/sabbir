#include<stdio.h>
int main()
{
    int M,N,T,A;
    while(scanf("%d %d %d",&M,&N,&T)!=EOF)
    {
    if(T%M==0 && T%N==0 && N>M)
    {
        A=((T/M)+(T/N)+(T/N));
        printf("%d times\n",A);
    }
    }
    return 0;
}
