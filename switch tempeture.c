#include<stdio.h>
int main()
{
   int choice;
   float temp,converedtemp;

   printf("this program is about Fahrenheit and Celsius\n");
   printf("1. Fahrenheit to Celsius\n");
   printf("2. Celsius to Fahrenheit\n");
   printf("Enter a choice one = ");
   scanf("%d",&choice);

   switch(choice)
   {
   case 1:
    {
      printf("Please enter a Fahrenheit temperature = ");
      scanf("%f",&temp);
      converedtemp =(temp-32)/1.8;
      printf("The Celsius temperature = %f",converedtemp);
    }
   case 2:
    {
     printf("Please enter a Celsius temperature = ");
     scanf("%f",&temp);
     converedtemp =(1.8*temp)+32;
     printf("The Celsius temperature = %f",converedtemp);


    }


   }


}
