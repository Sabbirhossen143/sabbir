#include<stdio.h>

int main()
{
    int x=0,y=0;
    int n,i,k;

    scanf("%d %d",&n,&k);
    int e=0;
    int d=0;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
            e++;
        }
    }
    for(i=1;i<=n;i++){
        if(i%2!=0)
        {
             printf("%d ",i);
            d++;
        }
    }

    x=e;
    y=d;

    if(k<=x){

        printf("\nThe %dth element in this sequence is : %d",k,k*2);
        }
    if(k>x){
            int p=k-x;

        printf("\nThe %dth element in this sequence is : %d",k,(p*2)-1);
    }
}

