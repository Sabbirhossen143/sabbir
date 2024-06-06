#include<stdio.h>
int main()
{
    int T,S,X,L;
    double Y,B;

    scanf("%d",&T);


for(X=1;X<=T;X++)
    {
    scanf("%d %d",&S,&L);
    B=L;
    Y=(3600*B)/S;
    printf("Case %d: %.2lf km/h\n",X,Y);
}
   return 0;
}


