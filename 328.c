#include<stdio.h>
int main()
{
    double W,b,R,A,H;
    int T;

    while(scanf("%lf",&H)!=EOF)
    {
     A=H;
        if(A<= 9999.99)
    {

        W=(4*H);
        R=A*W;
        b=(H*W)/2;
        T=ceil(b);
        printf("Area of Rectangle: %.2lf\n",R);
        printf("Area of Triangle: %d\n",T);
        }
    }
    return 0;
}
