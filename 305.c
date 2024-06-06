#include<stdio.h>
int main()
{
  int X,Y,m,r;
  while(scanf("%d %d",&X,&Y)!=EOF)
{

  m=(X+Y)/2;
  r=m-Y;

  printf("%d %d\n",m,r);
}
  return 0;

}
