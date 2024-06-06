#include<stdio.h>
#include<math.h>
int main()
{
    float area,R,V;
    printf("Enter a Radius of a Sphere : ");
    scanf("%f",&R);

    area = (4*3.1416*pow(R,2));

    V = (4*3.1416*pow(R,3))/3;

    printf("The Surface area of this Sphere : %f\n",area);
    printf("The Circumference of this Sphere: %f\n",V);
    return 0;
}
