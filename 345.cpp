#include<stdio.h>
int main()
{
    int A,B,C;
    while(scanf("%d %d",&A,&B)!=EOF)
    {
        C=A+A+1+A+2;
        if(A <=100 && B <= 100)
        {

          if(C>B)
            printf("A is too larger than B\n");
          if(C<B)
            printf("A is too smaller than B\n");

    }
    }
    return 0;
}
