#include<stdio.h>
int main(){
int a,n,b,sum=0;
scanf("%d",&n);
b=n;
while(n!=0){
    a=n%10;
    sum=sum+a;
    n=n/10;
}
printf("The sum of %d number is : %d\n",b,sum);
}

