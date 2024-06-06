#include<stdio.h>
int main()
{
    int T,N,i,j;

    int B;
    scanf("%d",&T);
    for(j=0; j<T; j++)
    {
        int m=0,count=0;
        char ch='H';
        char c='T';
        scanf("%d",&N);
        char A[N];
        for(i=0; i<N; i++)
        {
            scanf("%s",&A[i]);

        }
        for(i=0; i<N; i++)
        {
            if(A[i]==ch)
                count++;

            else if(A[i]==c)
                m++;
            //if(count>m)
            //printf("England\n");
            //else if(count<m)
            //printf("Pakistan\n");
}
        printf("%d %d",&count,&m);

}
}
