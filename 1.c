
#include<stdio.h>
int main(){
int T,S,A,B,C,i,a;
scanf("%d",&T);
for(i=1;i<=T;i++){
    scanf("%d %d %d %d",&S,&A,&B,&C);
    a=S-(A+B+C);
    printf("%d\n",a);
}


}
