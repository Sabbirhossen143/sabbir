#include<stdio.h>
int main()
{
  int i,n,multi=1;
  printf("Enter the value of n = ");
  scanf("%d",&n);
  for(i=1; i<=n; i++)
  {
      multi = multi*i;

  }
    printf("%d factor = %d",n,multi);
    return 0;









}
