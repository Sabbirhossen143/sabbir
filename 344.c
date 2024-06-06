#include<stdio.h>
int main()
{
    int N,X,A;
    while(scanf("%d %d",&N,&X)!=EOF)
    {
        A=N-X;
        if(A<X)
            printf("The war is stop\n");
        else
            printf("The war is going on\n");
    }
    return 0;
}
