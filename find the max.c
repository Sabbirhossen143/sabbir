#include<stdio.h>
int main(){

int x,y;

while(scanf("%d %d",&x,&y)!=EOF){

if(x==0 && y==0){
        return 0;
}

    if(x>y)
        printf("%d\n",x);
    else
        printf("%d\n",y);

}
}
