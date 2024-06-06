#include<stdio.h>
int main()
{
    double A,B,C,m;
    scanf("%lf\n %lf\n %lf",&A,&B,&C);
    m=((A/10)*2)+((B/10)*3)+((C/10)*5);
    printf("MEDIA = %.1lf\n",m);
    return 0;
}
