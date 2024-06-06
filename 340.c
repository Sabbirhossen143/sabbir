#include<stdio.h>
int main()
{
    int S;
    double X,A,B,C,D;
    while(scanf("%d",&S)!=EOF)
    {
        X=S;
        A=X/6;
        B=sqrt(A);
        C=B*B;
        D=C*B;


        printf("%.2lf\n",D);
    }
    return 0;
}
