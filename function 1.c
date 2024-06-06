#include<stdio.h>

int sum(int x,int y)
{

    int c;
    c=x+y;
    printf("%d",c);
    return 0;
}
int main()
{
int a,b,ans;
    scanf("%d %d",&a,&b);

    ans=sum(a,b);

}
