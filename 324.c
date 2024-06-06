#include<stdio.h>
int main()
{
    int P;
    float M,X,Y,Z;
    double A,B,C;
    while(scanf("%f %d %f %f %f",&M,&P,&X,&Y,&Z)!=EOF)
    {
        A=M-((M*P)/100);
        B=X+Y+Z;
        C=B/A;

        printf("Monthly Save = %.2lf\n",A);
        printf("Total Cost = %.2lf\n",B);
        printf("Minimum Time = %d Months\n",C);
    }
    return 0;
}
