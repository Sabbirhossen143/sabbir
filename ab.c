#include <stdio.h>
int main()
{
  int x,n,sum,r,i;
  for(i=0; ;i++)
  {
      scanf("%d",&x);
      if(x!=0)
      {
          sum=0;
          n=x;
          while(n!=0)
          {
              r=n%10;
              sum=sum+r;
              n=n/10;
          }
          printf("%d\n",sum);
      }
      else
        break;
  }

}

