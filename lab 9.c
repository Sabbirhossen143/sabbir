#include<stdio.h>
#include<math.h>
int main()
{
    double X,Y;
    printf("Enter the value of X = ");
    scanf("%lf",&X);

    Y=(3*pow(X,4))-(5*sqrt(pow(X,3)))+(pow(X,0.33))-7;


    printf("The value of Y = %lf\n",Y);

    return 0;




}
