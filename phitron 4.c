#include<stdio.h>
int main()

{
    int n,a,sum=0;
    scanf("%d",&n);
    while(n!=0){
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    printf("%d\n",sum);
    return 0;
}
