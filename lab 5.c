
#include<stdio.h>
int main()
{
    int A,s,H,S,M;
    printf("Enter a Number of Seconds : ");
    scanf("%d",&s);

    H=(s/3600);
    A=(s%3600);
    M=(A/60);
    S=(A%60);

   printf("%d Hours, %d Minutes, %d Seconds",H,M,S);

   return 0;
}
