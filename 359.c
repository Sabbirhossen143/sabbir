#include<stdio.h>
int main()
{
  int N;
  while(scanf("%d",&N)!=EOF)
  {
      if(N%2==0)
        printf("YES\n");
      else
        printf("NO\n");
  }
  return 0;
}
