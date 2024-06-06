
#include<stdio.h>
int main(){
 int A,Y,N,Z;
 double X;
 while(scanf("%d",&N)!=EOF){

        if(N%2==0){
              Y=N/2;
            Z=Y+1;
            printf("%d %d\n",Y,Z);
        }
        else{

            X=N/2;
            A=X+1;
        printf("%d\n",A);

        }

 }
}
