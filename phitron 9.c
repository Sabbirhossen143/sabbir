#include<stdio.h>
int main(){
int n,i=1,a;
scanf("%d",&n);
printf("The factors of %d are: ",n);
while(i<=n-1){
    if(n%i==0)

printf("%d, ",i);
i++;
}
printf("%d.",n);
return 0;
}
