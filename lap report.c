#include<stdio.h>
#include<math.h>
int main()
{
    float area,a;
    printf("Enter a arm of an equilateral triangle : ");
    scanf("%f",&a);

    area = (sqrt(3)/4)*pow(a,2);

    printf("The area of an equilateral triangle: %f\n",area);
    getch();
}

