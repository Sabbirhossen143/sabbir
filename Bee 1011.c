#include<stdio.h>
int main()
{
   float R;
   double x,pi;
   scanf("%f",&R);

   pi= 3.14159;

   x=(4*pi*R*R*R)/3;

   printf("VOLUME = %.3lf\n",x);

    return 0;
}
