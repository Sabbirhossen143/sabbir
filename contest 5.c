
#include<stdio.h>
int main()
{
    int n,sum=0,r,i;

  while(scanf("%d",&n)!=EOF)
  {
  while(n!=0)
  {
    r=n%10;
    sum=sum+r;
    n=n/10;
    }
  printf("%d\n",sum);
}
  return 0;
}
