#include<stdio.h>
int main(){
int T,N,i,j;
int A[100];
scanf("%d",&T);
for(j=0;j<T;j++){
        int m=0;
        scanf("%d",&N);
    for(i=0;i<N;i++){
            if(0 <= A[i] < 100){
        scanf("%d",&A[i]);
    }
    }
    for(i=0;i<N;i++){
        if(m<A[i])
        {
            m=A[i];
        }
    }
    printf("%d\n",m);

}
}
