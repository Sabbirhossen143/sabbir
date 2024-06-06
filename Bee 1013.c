
#include<stdio.h>
int main()
{
    int a,b,c,AB,BC,CD;
    scanf("%d %d %d",&a,&b,&c);
    AB=(a+b+abs(a-b))*0.5;
    BC=(b+c+abs(b-c))*0.5;

    CD=(AB+BC+abs(AB-BC))*0.5;

    printf("%d eh o maior\n",CD);

    return 0;
}
