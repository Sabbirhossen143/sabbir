#include<stdio.h>
int main()
{
   double A,B,C;
   double X,R1,R2,Y;
   scanf("%lf %lf %lf",&A,&B,&C);

   X=(B*B)-(4*A*C);
   Y=sqrt(X);
   R1=(-B+Y)/(2*A);
   R2=(-B-Y)/(2*A);

   if(X<=0 || A==0)
   {
       printf("Impossivel calcular\n");
   }
   else
    {
     printf("R1 = %.5lf\n",R1);
     printf("R2 = %.5lf\n",R2);
    }
   return 0;
}
