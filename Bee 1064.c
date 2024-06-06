#include<stdio.h>

int main()
{
    double x,s=0,B;
    int i,sum=0;
    for(i=1;i<=6;i++)
        {
        scanf("%lf",&x);
        }
    for(i=1;i<=6;i++)
    {
        if(x>0)
        {
        sum=sum+1;
        }
        if(x>0)
        {
            s=s+i;
        }
    }
     B=s/sum;
    printf("%d valores positivos\n",sum);
    printf("%d\n",B);
    return 0;
}
