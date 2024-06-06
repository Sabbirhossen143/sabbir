#include <stdio.h>
int main()
{

    int i,X,d=0,rem,base=1;
    scanf("%d",&X);

    while(X>0)
    {
        rem = X%10;

        d = d+rem*base;
 X = X/10;
base*=2;

    }

    printf ("%d\n",d);
}








