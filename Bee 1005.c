#include <stdio.h>
int main()
{
  float A, B;
  double X,Y,C;
  scanf("%f\n %f",&A,&B);
  X=(A*3.5)+(B*7.5);
  Y=3.5+7.5;
  C=X/Y;
  printf("MEDIA = %.5lf\n",C);
  return 0;
}
