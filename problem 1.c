#include<stdio.h>
int main(){
int n;
int i;
scanf("%d",&n);
if(0>n){
    for(i=n;i<=(2*n+1);i++){
        printf("%d ",i);
    }
}
if(0<n){
    while(i<=n){
        printf("%d ",i);
        i--;
    }
}
}
