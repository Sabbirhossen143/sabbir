#include<stdio.h>
int main()
{
   int M,N;
  while(scanf("%d %d",&M,&N)!=EOF)
  {
      if(M<=N)
    printf("%d\n",N);
    else
     printf("%d\n",M);
  }


return 0;

}
