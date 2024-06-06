#include<stdio.h>
int main()
{
    float area,R,C;
    printf("Enter a Radius of a Circle : ");
    scanf("%f",&R);

    area = 3.1416*(R*R);

    C = (2*3.1416*R);

    printf("The Area of this Circle: %f\n",area);
    printf("The Circumference of this Circle: %f\n",C);
    return 0;
}
