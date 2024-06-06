#include<stdio.h>

int main()
{
  int x1,y1,x2,y2,P1,P2,C;
  double D;
  scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
  P1=(x2-x1)*(x2-x1) ;
  P2=(y2-y1)*(y2-y1);
  C=P1+P2;
  D=sqrt(C);
  printf("%.8lf\n",D);
  return 0;
}

