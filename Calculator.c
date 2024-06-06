#include<stdio.h>
int main()
{
    char a;
    double num1,num2;
    printf("Enter an operator(+,-,*,/) : ");
    scanf("%c",&a);
    printf("Enter two number : ");
    scanf("%lf %lf",&num1,&num2);

    switch (a)
    {
    case '+':
        {
          printf("%lf + %lf =%lf\n",num1,num2,num1+num2);
          break;
        }
    case '-':
        {
          printf("%lf - %lf =%lf\n",num1,num2,num1-num2);
          break;
        }
    case '*':
        {
          printf("%lf * %lf =%lf\n",num1,num2,num1*num2);
          break;
        }
    case '/':
        {
          printf("%lf / %lf =%lf\n",num1,num2,num1/num2);
          break;
        }
    default:
        printf("you are not type an operator");

    }


















    }
