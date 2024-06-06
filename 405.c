#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF){

        if(a<20){
            printf("junior\n");
        }
        else
            printf("senior\n");

    }
}
