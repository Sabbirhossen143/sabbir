#include<stdio.h>
int main()
{
    int n,i,a[100],k;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    int sum=0;
    for(i=0;i<n;i++)
    {
         sum+=a[i];
    }
    printf("%d",sum);
    int a=sum/k;
    for(i=0;i<n;i++)
    {
         if(sum==a[i])
            printf("%d",sum);
         else if(sum)
    }

}
