
#include<stdio.h>
int main()
{
    double A,B,X,Y;
    char c;
    scanf("%s %lf\n %lf",&c,&A,&B);
    X=B*0.15;
    Y=X+A;
    printf("TOTAL = R$ %.2lf\n",Y);
    return 0;
}
