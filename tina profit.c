#include<stdio.h>
int main()
{
  int P,n,r;
  float I;

  scanf("%d %d %d",&P,&n,&r);

  I=(P*r*n)/100;

  printf("%.2f",I);
  return 0;

}
