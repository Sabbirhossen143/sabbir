#include<stdio.h>
int main(){

int num1,num2,n1,n2,LCM,rem;
scanf("%d %d",&num1,&num2);
n1=num1;
n2=num2;
while(n2!=0){
    rem=n1%n2;
    n1=n2;
    n2=rem;
}

LCM=(num1*num2)/n1;
printf("The LCM of %d and %d is %d",num1,num2,LCM);
}
