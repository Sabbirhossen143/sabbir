#include<stdio.h>
#include<string.h>
int main()
{
    int T,N,i,j;
    char S[50];
    scanf("%d",&T);
    for(i=0;i<T;i++){
int A=0,count=0;
        scanf("%d",&N);
        for(j=0;j<N;j++){
            scanf("%s",&S[j]);
        }

        for(j=0;j<N;j++){
            if(S[j]=='H')
                count++;

            else if(S[j]=='T')
                A++;
}
    if(count>A)
        printf("England\n");
    else
        printf("Pakistan\n");

}
return 0;
}

