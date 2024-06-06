#include<stdio.h>
int main()
{
    int X;
    float Y,Z;
    double A;
    scanf("%d\n",&X);
    scanf("%f",&Y);

    Z=X;

    A=Z/Y;

    printf("%.3lf km/l\n",A);

    return 0;


}
