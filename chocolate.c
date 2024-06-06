#include<stdio.h>
int main()
{
  int M,N,A,B,C;
  scanf("%d %d",&M,&N);

  A=(M-N)*365;
  B=A/100;
  C=A-(B*100);
  printf("%d \n%d",A,C);
  return 0;
}
