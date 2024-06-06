#include<stdio.h>
int main(){

int n,sum,i,s,total=0;
while(scanf("%d",&n)!=EOF){

    while(n>0){
              if(sum>10){
                         i=n%10;
                         sum=sum+i;
                         n=n/10;

    }
    }
    printf("%d",sum);

    if(sum%3==0){
        printf("YES\n");
    }
    else

printf("NO\n");
}
}



