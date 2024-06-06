#include<stdio.h>

int main()
{

    int i, j,N;
    scanf("%d",&N);
    if(1 <= N && N <= 9){
    for(i=1; i<=N; i++)
    {
            for(j=i; j<=N; j++){
                if(i==1 || j==i || i==N)
                    printf("%d",j);
            else
                printf(" ");
        }
int         k=j-2;
        for(j=1; j<i; j++, k--)
        {
            if(i==1 || i==N || j==i-1)
                printf("%d", k);
            else
                printf(" ");
        }

        printf("\n");
}
}
    return 0;
}
