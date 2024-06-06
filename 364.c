#include<stdio.h>

int main()
{
    int i,n,T=1;
    while(scanf("%d",&n)!=EOF)

{

    int R=0;
    for(i=1;i<=n;i++){
    if(i%2==0){
        R=R-i;
    }
    else{
        R=R+i;
    }
}

    printf("Case %d: %d\n",T,R);
    T++;
}

}
