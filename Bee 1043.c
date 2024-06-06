#include<stdio.h>
int main()
{
  float A,B,C;
  double X,Y;
  scanf("%f %f %f",&A,&B,&C);
  {

      if(A>B && A>C)
        {
         if(B+C>A)
         {
           X=A+B+C;
           printf("Perimetro = %.1lf\n",X);
         }
         else
         {
            Y=(.5*C*(A+B));
           printf("Area = %.1lf\n",Y);
         }
        }

else if(A<B && C<B)
        {
         if(A+C>B)
         {
           X=A+B+C;
           printf("Perimetro = %.1lf\n",X);
         }
         else
         {
            Y=(.5*C*(A+B));
           printf("Area = %.1lf\n",Y);
         }
        }
        else
        {
           if(C<A+B)
         {
           X=A+B+C;
           printf("Perimetro = %.1lf\n",X);
         }
         else
         {
            Y=(.5*C*(A+B));
           printf("Area = %.1lf\n",Y);
         }
        }

  }
  return 0;
}
