#include<stdio.h>
void div(int x)
{
    int i;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
            printf("%d ",i);
    }
}

int main()
{
    int N;
    scanf("%d",&N);
    div(N);
}
