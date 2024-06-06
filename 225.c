#include<stdio.h>
int main()
{
    int D1,D2,T1,T,A;
    scanf("%d %d %d",&D1,&D2,&T);

    T1=(D2*T)/(D2-D1);
    A=(D1*T1);
    printf("\n%d",A);
    return 0;

}
