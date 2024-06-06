
#include<stdio.h>
int main(){
int N,A;
scanf("%d",&N);
if(1<=N && N<=10^9){
A=(N*(N-1))/2;
}
else
    return 0;
printf("%d\n",A);
}
