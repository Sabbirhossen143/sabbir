#include <stdio.h>

int main()
{
  int L,N;
  float pi=3.1416;
  double A,B,R;

  scanf("%d %d",&L,&N);

  B=N;
  A=L;

  R=B/(2*pi*A);


  printf("%.2lf km\n",R);
  return 0;
}
