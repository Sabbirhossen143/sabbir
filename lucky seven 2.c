#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,n;
    scanf("%d",&T);
    char arr[120];
    while (T--)
    {
        scanf("%s",arr);
        n= strlen(arr);
        int flag=0;
        for(i=0;i<n/2;i++)
        {
            if(arr[i]!=arr[n-i-1])
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
            if(strlen(arr)<=7)
                printf("Case #3: %s\n",arr);
            else
                printf("Case #2: %c%d%c\n",arr[0], n-2, arr[n-1]);
        }
    }
    return 0;
}
