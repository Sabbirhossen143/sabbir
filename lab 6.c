#include<stdio.h>
int main()
{
    float C,F;
    printf("Enter the Temperature of Fahrenheit Scale : ");
    scanf("%f",&F);

    C=((F-32)*5)/9;

   printf("Converted the Temperature of Fahrenheit Scale to Centigrade scale\n");
   printf("The Temperature of Centigrade scale : %f\n",C);

   printf("Enter the Temperature of Centigrade Scale : ");
   scanf("%f",&C);

   F=((C*9)/5)+32;

    printf("Converted the Temperature of Centigrade scale to Fahrenheit Scale\n");

   printf("The Temperature of Fahrenheit Scale : %f",F);


   return 0;
}

