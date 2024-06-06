#include<stdio.h>
#include<math.h>
int main()
{
    float area,R,V,H;
    printf("Enter a Radius and a Height of a Cylinder : ");
    scanf("%f %f",&R,&H);

    area = (2*3.1416*R*H)+(2*3.1416*pow(R,2));

    V = (3.1416*pow(R,2)*H);

    printf("The Surface area of this Cylinder : %f\n",area);
    printf("The Volume of this Cylinder : %f\n",V);
    return 0;
}
