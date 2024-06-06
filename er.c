#include<stdio.h>
int main()
{
    double X,Y,T,A,B,C;
    scanf("%lf %lf %lf",&X,&Y,&T);

    A=(Y-X)/T;
    B=(A*(T*T))/2;
    C=(X*T)+B;
    printf("%.1lf \n%.1lf",A,C);
    return 0;
}






