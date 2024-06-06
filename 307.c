#include<stdio.h>
int main()
{
    int A,B,C,D,E;
    while(scanf("%d %d %d %d",&A,&B,&C,&D)!=EOF)
    {
     E=((A*B)-(C*D));

      printf("%d\n",E);
    }
return 0;

}
