#include<stdio.h>
int main()
{
  int X,Y,M,F,C;
  scanf("%d\n %d\n %d",&X,&Y,&M);

  C=(Y*2)-M;
  F=(X*2)-C;

  printf("%d\n",F);
  return 0;


}
