#include<stdio.h>
int main()
{
    float x1,x2,y1,y2;
    double A,p1,p2;

    scanf("%f %f\n %f %f",&x1,&y1,&x2,&y2);

    p1=(x2-x1)*(x2-x1);
    p2=(y2-y1)*(y2-y1);

    A=sqrt(p1+p2);

    printf("%.4lf\n",A);

    return 0;


}
