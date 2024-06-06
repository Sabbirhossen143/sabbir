#include<stdio.h>
int main(){
    int N,i;
    char A[100];
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        scanf("%c",&A[i]);
    }
    int count=0,sum=0;
    for(i=1;i<=N;i++){
        if(A[i]=='+'){
            count++;
        }
        if(A[i]=='-'){
            sum++;
        }
    }
    if(count>sum)
        printf("%d\n",count);
    else
        printf("%d\n",sum);
}
