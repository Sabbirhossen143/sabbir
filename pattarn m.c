#include <stdio.h>

int main()
{
    int i,N,j;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=i;j<=N;j++)
        {
            if(j==1)
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}
