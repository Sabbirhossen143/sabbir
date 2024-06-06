#include<stdio.h>
int main()
{
    int num,sum=0,r;
    printf("Enter a number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    printf("The sum of digit of this number : %d\n",sum);
    return 0;
}
