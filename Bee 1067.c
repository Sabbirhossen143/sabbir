#include<stdio.h>

int main()
{
    int X,i;
    scanf("%d",&X);
    for(i=1;i<=X;)
    {
        if(1<=X && X<=1000)
        {
        printf("%d\n",i);
        i=i+2;
        }
    }
    return 0;
}

