#include<stdio.h>
#include<math.h>
int main()
{
    int N,V,T,i,a,b;
    scanf("%d",&T);

    for(i=1; i<=T; i++)
    {
        scanf("%d",&N);
if(N==0)
{
    V=1;
    printf("%d",V);
}
else{
         V = (int)log2(N);
         b=pow(2,V);
        if(b < N)
          {

               a=(2*b);


        printf("%d\n",a);
          }
        else
        {
          printf("%d\n",b);
        }
    }
}
}
