#include<stdio.h>
int main()
{
 int A,C,E,G,I,K,M,O,Q,S,U,W;
 float B,D,F,H,J,L,N,P,R,T,V,X;


  scanf("%f",&N);

    A=N/100;
    B=N-(A*100);
    C=B/50;
    D=B-(C*50);
    E=D/20;
    F=D-(E*20);
    G=F/10;
    H=F-(G*10);
    I=H/5;
    J=H-(I*5);
    K=J/2;
    L=J-(K*2);
    M=L/1;
    X=L-(M*1);
    O=X/0.50;
    P=X-(O*0.50);
    Q=P/0.25;
    R=P-(Q*0.25);
    S=R/0.10;
    T=R-(S*0.10);
    U=T/0.05;
    V=T-(U*0.05);
    W=V/0.01;


    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00",A);
    printf("\n%d nota(s) de R$ 50.00",C);
    printf("\n%d nota(s) de R$ 20.00",E);
    printf("\n%d nota(s) de R$ 10.00",G);
    printf("\n%d nota(s) de R$ 5.00",I);
    printf("\n%d nota(s) de R$ 2.00",K);
    printf("\nMOEDAS:");
    printf("\n%d moeda(s) de R$ 1.00",M);
    printf("\n%d moeda(s) de R$ 0.50",O);
    printf("\n%d moeda(s) de R$ 0.25",Q);
    printf("\n%d moeda(s) de R$ 0.10",S);
    printf("\n%d moeda(s) de R$ 0.05",U);
    printf("\n%d moeda(s) de R$ 0.01",W);


    return 0;


}

