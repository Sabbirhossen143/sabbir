#include<stdio.h>
int main()
{
    int n,sum=0,i=1,;
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        sum=sum+i;
        ++i;
    }
    if(sum==n)
        printf("Its a perfect number\n");
    else
        printf("Its not a perfect number\n");
    return 0;
}
