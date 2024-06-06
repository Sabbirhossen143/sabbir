#include<stdio.h>
#include<math.h>
int main()
{
    float r1,r2,b,a,c,d,realpart,imaginary;
    printf("Find the roots of a quadratic equation\n");
    printf("Enter the value of a , b , c : ");
    scanf("%f %f %f",&a,&b,&c);

    d=pow(b,2)-(4*a*c);
    r1=(-b+ sqrt(d))/(2*a);
    r1=(-b- sqrt(d))/(2*a);

    if(d>0)
    {
        printf("Both Roots are Real and Different\n");
        printf("Root1 = %f and Root2 = %f",r1,r2);

    }

else if(d==0)
    {
        printf("Both Roots are Real and Equal\n");
        r1=r2=(-b/(2*a));
        printf("Root1 = %f and Root2 = %f",r1,r2);
    }

 else
     {
        printf("This Roots are Complex and Different\n");
        realpart = (-b/(2*a));
        imaginary =sqrt(-d)/(2*a);
        printf("Root1 = %.2f+%.2fi and Root2 = %.2f-%.2fi",realpart,imaginary,realpart,imaginary);

    }


   return 0;

}
