#include<stdio.h>
int main()
{
  int a,b,c;
  while(scanf("%d %d %d",&a,&b,&c)!=EOF)
  {

    if(a<b && b>c)
        {
         if((a+c)>b && (b*b)==(a*a)+(c*c))
           printf("Valid\n");
         else
           printf("Invalid\n");
        }

       if(a>b && a>c && (a*a)==(b*b)+(c*c))
        {
         if((b+c)>a)
          printf("Valid\n");
        else
          printf("Invalid\n");
        }
       if(a<c && b<c)
        {
         if((a+b)>c && (c*c)==(b*b)+(a*a))
          printf("Valid\n");
        else
          printf("Invalid\n");
        }

  }
  return 0;
}

