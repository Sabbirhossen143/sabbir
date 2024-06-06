#include<stdio.h>
int main()
{
    int A,B;
    while(scanf("%d %d",&A,&B)!=EOF)
    {
          if(A+A>B)
            printf("A is too larger than B\n");
          if(A+A<B)
            printf("A is too smaller than B\n");


    }
    return 0;
}
