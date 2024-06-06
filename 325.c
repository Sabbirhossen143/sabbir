#include<stdio.h>
int main()
{
    int m;
    double X,A;
    while(scanf("%d",&m)!=EOF)
    {
        X=m;
        A=pow((X+(1/X)),4);
        printf("%.3lf\n",A);
    }
    return 0;
}
