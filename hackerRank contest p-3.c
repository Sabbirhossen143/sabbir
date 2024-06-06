#include<stdio.h>
#include<string.h>
int main()
{
    int T,N,i,j,B,C;
    char S[50];
    scanf("%d",&T);
    for(j=0; j<T; j++)
    {
        int A=0,count=0;
        scanf("%d",&N);
        for(j=0; j<N; j++)
        {

            scanf("%s",&S[j]);

}
        for(j=0; j<N; j++)
        {
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

