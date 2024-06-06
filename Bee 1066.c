#include<stdio.h>

int main()
{
    int x;
    int i,sum=0,s=0,m=0,u=0;
    for(i=1;i<=5;i++)
        {
        scanf("%d",&x);
        if(x%2==0)
        {
        sum=sum+1;
        }
        if(x%2!=0)
        {
        s=s+1;
        }
        if(x>0)
        {
        m=m+1;
        }
        if(x<0)
        {
        u=u+1;
        }


    }

    printf("%d valor(es) par(es)\n",sum);
    printf("%d valor(es) impar(es)\n",s);
    printf("%d valor(es) positivo(s)\n",m);
    printf("%d valor(es) negativo(s)\n",u);

    return 0;
}

