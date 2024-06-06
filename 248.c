#include<stdio.h>
int main()
{
    int P,n,r;
    double I,A,B,C;
    scanf("%d %d %d",&P,&n,&r);

if(P<20000 && n<15 && r<10)
         {
          A=P;
          B=r;
          C=n;

          I=(A*B*C)/100;
         }


    printf("%.2lf\n",I);
    return 0;

}
