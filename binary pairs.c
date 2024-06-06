#include<stdio.h>
#include<string.h>
int main()
{
    int T, N, i, j, l;

    scanf("%d", &T);
    int arr[T];
    for(i=0; i<T; i++)
    {
        int flag=0,sum=0;
        scanf("%d", &N);
        char S[1000];
        scanf("%s", S);
        l=strlen(S);
        for(j=0; j<l; j++)
        {
            if((S[j]=='0' && S[j+1]=='1')||
               (S[j]=='1' && S[j+1]=='0')){
                flag++;
               }
        }
       arr[i]=flag;

    }
    for(i=0; i<T; i++){
        printf("%d\n", arr[i]);


    }
    return 0;
}
