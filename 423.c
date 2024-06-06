
#include<stdio.h>
int main()
{
    int A1,A2,A3,B1,B2,B3;
    while(scanf("%d %d %d %d %d %d",&A1,&A2,&A3,&B1,&B2,&B3)!=EOF){
            if(A1==B1||A1==B2||A1==B3){
                if(A2==B1||A2==B2||A2==B3){
                        if(A3==B1||A3==B2||A3==B3){
                                printf("A=B\n");
            }
                }
            }
            else
                 printf("A!=B\n");
    }
}
