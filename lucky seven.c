#include <stdio.h>
#include <string.h>

int main()
{
    char S[120];
    int l,ans=0;
    char temp[20],S1[120];

    int i,T,j;
    scanf("%d",&T);

    for(j=0; j<T; j++)
    {

        scanf("%s", S);

        strcpy(S1,S);

        l = strlen(S);

        int flag=0;
        for(i=0;i<l/2;i++)
        {
            if(S[i]!=S[l-i-1])
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            printf("Case #1: Not Palindrome\n");
        }
        else
        {
            if(l<=7)
                printf("Case #3: %s\n",S);
            else
                printf("Case #2: %c%d%c\n",S[0], S-2, S[l-1]);
        }
    }
    return 0;
}
