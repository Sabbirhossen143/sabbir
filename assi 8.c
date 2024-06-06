#include <stdio.h>
#include<string.h>

int main()
{
    int k=0,i;
    char  s[100],l,st[100],c,A[100];
    scanf("%s",s);
    scanf("%d",&k);

    for(int i=0; i<strlen(s); i++)
    {
        int d=0,num=0;

        d=s[i];
        num=k;
        if(d+k>122)
        {
            k-=(122-d);
            k=k%26;
            c=96+k;
            st[i]+=c;
        }

        else
        {
            l=d+k;

            st[i]+=l;
            k=num;
        }
    }


    printf("%s",st);
}
