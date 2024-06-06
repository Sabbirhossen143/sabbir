#include<stdio.h>
int main(){
long long int N;
long long int A;
scanf("%lld",&N);
if(1<=N && N<=1000000000){
A=(N*(N-1))/2;
printf("%lld",A);
}
}
