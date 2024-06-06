#include<stdio.h>
int main()
{
    int N,A,B,C,D,E,F,G,H,I,J,K,L,M;

    scanf("%d",&N);

    A=N/100;
    B=N%100;
    C=B/50;
    D=B%50;
    E=D/20;
    F=D%20;
    G=F/10;
    H=F%10;
    I=H/5;
    J=H%5;
    K=J/2;
    L=J%2;
    M=L/1;

    printf("%d\n",N);
    printf("%d nota(s) de R$ 100,00\n",A);
    printf("%d nota(s) de R$ 50,00\n",C);
    printf("%d nota(s) de R$ 20,00\n",E);
    printf("%d nota(s) de R$ 10,00\n",G);
    printf("%d nota(s) de R$ 5,00\n",I);
    printf("%d nota(s) de R$ 2,00\n",K);
    printf("%d nota(s) de R$ 1,00\n",M);

    return 0;


}
