#include<stdio.h>
int main(){
int t,a,b,c,i;
scanf("%d",&t);
for(i=0;i<t;i++){
    scanf("%d %d %d",&a,&b,&c);

    if((a+b==c) || (b+c==a) || (a+c==b))
        printf("YES\n");
    else
        printf("NO\n");

}
}
