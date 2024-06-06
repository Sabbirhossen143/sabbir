#include<stdio.h>
int main()
{
    int v,sum=0,i,a,num;
    printf("Enter any number : ");
    scanf("%d",&num);
    v=num;
    while(v!=0)
    {
        a=v%10;
        sum=sum+a*a*a;
        v=v/10;
    }
    if(sum==num)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    return 0;
}
