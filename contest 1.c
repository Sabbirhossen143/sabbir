#include<stdio.h>
#include<math.h>
int main()
{
  double x1,x2,y1,y2,P1,P2,C;
  double D,F;
  scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
   P1=(x2-x1);
   P2=(y2-y1);
   C=(P1*P1)+(P2*P2);
   D=C;
   F=sqrt(D);
  printf("%.8lf\n",F);
  return 0;
}
