
#include<stdio.h>
int main()
{
    int N,A,B,C,D;

    scanf("%d",&N);

    A=N/365;
    B=N%365;
    C=B/30;
    D=B%30;

    printf("%d ano(s)\n",A);
    printf("%d mes(es)\n",C);
    printf("%d dia(s)\n",D);

    return 0;


}
