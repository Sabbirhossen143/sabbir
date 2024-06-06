#include<stdio.h>
int main()
{
    float N,B;
    int A,C;

    scanf("%f",&N);

    A=N/100;
    B=N-(A*100);
    C=B/50;


    printf("%d\n",A);
    printf("%f\n",B);
    printf("%d\n",C);

    return 0;
}

