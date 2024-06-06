#include<stdio.h>
int main()
{
  int  N,M;
  double B,C,A,D,E;
    while(scanf("%d %d",&N,&M)!=EOF)
    {
        B=N;
        A=N+N;
        C=A/13;
        D=C+13;
        E=pow(D,M);

        printf("%.3lf\n",E);

    }
}

