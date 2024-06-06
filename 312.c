
#include<stdio.h>
int main()
{
   int A,B,C;
  while(scanf("%d %d %d",&A,&B,&C)!=EOF)
  {
      if(A>B && B<C)
         printf("%d\n",B);
      else if(B>A && A<C)
        printf("%d\n",A);
      else
        printf("%d\n",C);
  }


return 0;
}
