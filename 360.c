
#include<stdio.h>
int main()
{
  int A,B,C;
  while(scanf("%d %d %d",&A,&B,&C)!=EOF)
  {

      if(A<B && B>C)
       {
         if((A+C)>=B)
          printf("YES\n");
         else
          printf("NO\n");
       }

       else if(A>B && A>C)
       {
        if((B+C)>=A)
         printf("YES\n");
        else
         printf("NO\n");
       }
      else
       {
        if((A+B)>=C)
         printf("YES\n");

        else
        printf("NO\n");
       }
  }
  return 0;
}
