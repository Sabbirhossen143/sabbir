#include<stdio.h>
int main()
{
    int A,H;
    double X,C,B,D;
    while(scanf("%d %d",&A,&H)!=EOF)
    {
     if(A<=10000 && H<=10000)
        D=A;
        C=H;
        B=2*C;

        X=((D+B)/2)*C;

        printf("%.2lf\n",X);
    }
    return 0;
}
