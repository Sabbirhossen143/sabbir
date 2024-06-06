#include<stdio.h>
int main()
{

    double a,b,x,y;
    char c;

    scanf("%s\n %lf\n %lf",&c,&a,&b);
    x=(b*15)/100;
    y=x+a;
    printf("TOTAL = R$ %.2lf\n",y);
    return 0;
}
