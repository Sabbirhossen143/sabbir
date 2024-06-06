#include <stdio.h>

int main()
{
  int M,rev=0,rem,a,A,B,b,c,d,e;
  scanf("%d", &M);
  A=M;
  while(M!=0)
  {
    rem=M%10;
    rev=(rev*10)+rem;
    M=M/10;
  }
  B=rev;
  if(A<B)
    {
        a=B-A;
    }
    else
    {
        a=A-B;
    }
    b=a%10;
    c=a/10;
    d=c%10;
    e=b+d;
    printf("%d",e);

}









