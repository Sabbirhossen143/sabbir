#include <stdio.h>
int main()
{
  int N,X,Y, i;
  double A,B,C;
  scanf("%d\n",&N);
  for(i=1;i<=N;i++)
  {
    scanf("%d %d",&X,&Y);

    B=X;
    C=Y;

    if(Y==0)
       printf("divisao impossivel\n");

    else
    {
      A=B/C;
       printf("%.1lf\n",A);
    }
}
return 0;
}

