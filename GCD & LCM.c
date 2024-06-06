#include<stdio.h>
int main()
{
    int num1,num2,n1,n2,rem,LCD,GCD;
    printf("Enter two positive number = ");
    scanf("%d %d",&num1,&num2);

     n1=num1;
     n2=num2;

    while(n2!=0)
    {
       rem=n1%n2;
       n1=n2;
       n2=rem;
    }
    GCD=n1;
    LCD=(num1*num2)/GCD;
    printf("The GCD of those number = %d\n",GCD);

    printf("The LCD of those number = %d",LCD);


return 0;

}


