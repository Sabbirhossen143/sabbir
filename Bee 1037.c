#include<stdio.h>
int main()
{
    float x;
    scanf("%f",&x);


        if(0.00<x<=25.00)
         printf("Intervalo [0,25]\n");
        else if(25.01<=x<=50.00)
         printf("Intervalo (25,50]\n");
        else if(50.01<=x<=75.00)
         printf("Intervalo (50,75]\n");
        else if(75.02<=x<=100.00)
         printf("Intervalo (75,100]\n");
    else
        printf("Fora de intervalo\n");
    return 0;







}
