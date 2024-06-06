#include<stdio.h>

void sum(int x)
{
    int i=0,s;
    if(x>0){
        for(i=x;i>=-x;i--){
            printf("%d ",i);
        }
    }
    if(x<0)
    {
        for(i=-x;i!=+x;i--){

            printf("%d ",i);
        }
    }

}



int main()
{
    int n;
    scanf("%d",&n);
    sum(n);
}
