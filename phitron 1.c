#include<stdio.h>
int main(){

int a=5,b=13;
int c,d;

c=a;
d=b;
a=d;
b=c;
printf("%d and %d",a,b);

return 0;

}
