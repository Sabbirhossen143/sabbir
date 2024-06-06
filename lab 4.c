#include<stdio.h>
int main()
{
    int A,d,D,Y,M;
    printf("Enter a Number of Days : ");
    scanf("%d",&d);

    Y=(d/365);
    A=(d%365);
    M=(A/30);
    D=(A%30);

   printf("%d Years ,%d Months,%d Days ",Y,M,D);

   return 0;
}
