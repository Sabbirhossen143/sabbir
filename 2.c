#include<stdio.h>
int main()
{
int N,K,RUN,i,count=0;
scanf("%d %d",&N,&K);
for(i=1;i<=N;i++){
    scanf("%d",&RUN);
    if(RUN<K){
        count++;
    }

}
printf("%d",count);
}
