#include <stdio.h>

int main()
{
  int R;
  double X,r1,r2,A,B,C,Area;

  while(scanf("%d",&R)!=EOF)
{
  X=R;
  r1=X/2;
  r2=r1/2;

  A=(3.1416*X*X);
  B=(3.1416*r1*r1);
  C=(3.1416*r2*r2);

  Area = A+B+C;

  printf("%.2lf\n",Area);
}
  return 0;
}
