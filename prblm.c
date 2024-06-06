#include<stdio.h>
#include<string.h>
int main(){
int T,i,X,U,A=0,C=0,B=0,D=0;
scanf("%d",&T);
for(i=0;i<T;i++){
    scanf("%d %s",&X,&U);

    if(1<=X && X<=60){
        A=60-X;
        C=(A+40+60);
    }
    if(61<=X && X<=80){
        B=80-X;
        C=(B*2)+60;
    }
    if(81<=X && X<=99){
        D=100-X;
        C=D*3;
    }
    if(X==100){
        C=0;
    }
    if(X==0){
        C=160;
    }



printf("%d minutes\n",C);
}
}
