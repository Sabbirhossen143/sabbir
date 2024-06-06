#include<stdio.h>
int main()
{
    int T,N,num;
    scanf("%d",&T);
    for(N=0;N<T;N++){
        scanf("%d",&N);
    }
    if(N==1 || N==0)
        num=1;
    else{
            int i=2;
        while(i<=N){
            if (N % i == 0) {
      num= 1;
      break;
        }
    }
    if(num==0)
        printf("Yes\n");
    else
        printf("No\n");

}
}
