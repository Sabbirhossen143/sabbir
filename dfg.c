#include<stdio.h>
int main()
{
    int P,n,r;
    double I;
    scanf("%d %d %d",&P,&n,&r);

    I=(P*n*r)/100;
    printf("%.2lf",I);
    return 0;
}
