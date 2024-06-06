#include<stdio.h>
int main()
{
    int T;
    double A,C;
    while(scanf("%d",&T)!=EOF)
    {
        A=T;
        C=((A-32)*5)/9;
        printf("%.2lf\n",C);
    }
    return 0;
}
