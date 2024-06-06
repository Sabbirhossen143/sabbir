
#include<stdio.h>
int main()
{
    float W,H,BMI;
    int a;
    printf("BMI Calculator\n");
    printf("If Your Weight is pounds unit, Press 1.\n");
    printf("If Your Weight is Kilograms unit, Press 2.\n");
    printf("Please Choose Your Option(1/2) : ");
    scanf("%d",&a);

    if(a==1)
       {
        printf("Enter Your Weight(pounds) And Height(meters) : ");
        scanf("%f %f",&W,&H);
        BMI=(W*703)/(pow(H,2));
        printf("Your BMI = %f",BMI);
       }
    else if(a==2)
    {
      printf("Enter Your Weight(kilograms) And Height(meters) : ");
      scanf("%f %f",&W,&H);
      BMI=W/pow(H,2);
      printf("Your BMI = %f",BMI);
    }
    else
        printf("You can not press the right option\n");

        if(BMI<18.5)
        {
            printf("\nBMI VALUES : Underweight");
        }
        else if(18.5<BMI<24.9)
        {
            printf("\nBMI VALUES : Normal");
        }
        else if(25<BMI<29.9)
        {
            printf("\nBMI VALUES : Overweight");
        }
        else if(BMI>=30)
        {
            printf("\nBMI VALUES : Obese");
        }
        getch();
}
