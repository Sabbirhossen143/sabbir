#include <stdio.h>
int main()
{
  int X,Y,i,sum=0,A;
  scanf("%d\n %d",&X,&Y);
  if(X>Y)
  {
      A=X;
      X=Y;
      Y=A;
  }
      for(i=X;i<=Y;i++)
      {
          if(i%13!=0)
            sum=sum+i;
      }
      printf("%d\n",sum);

  return 0;
}
