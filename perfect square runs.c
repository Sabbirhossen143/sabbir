#include<stdio.h>
int main()
{
    int T,N,i,j;
    int A[100];
    int B;
    scanf("%d",&T);
    for(j=0; j<=T; j++)
    {
        int m=0,count=0;
        scanf("%d",&N);

        for(i=0; i<N; i++)
        {
            if(0 <= A[i] <= 100)
            {
                scanf("%d",&A[i]);
            }
        }
        for(i=0; i<N; i++)
        {
            B=sqrt(A[i]);
            if(B*B==A[i])
                count ++;
        }
        if(count==0)
            printf("-1\n");
        else
            printf("%d\n",count);

    }
}
