#include<stdio.h>

int patt(int s)
{
    int i,j,k;
    for(i=1;i<=s;i++)
    {
        for(j=2;j<=i+1;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
        }


}

int main()
{
    int  n;
    scanf("%d",&n);
    patt(n);
}
