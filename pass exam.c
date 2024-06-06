#include<stdio.h>
#include<math.h>
int main()
{
  int m;
  float a,b;
  scanf("%d",&m);
  a=((m*m)+1)/m;

  b=a*a*a*a;

  printf("%.3f\n",b);
  return 0;

}
