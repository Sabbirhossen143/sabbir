#include<stdio.h>
#include<string.h>
char sum(char a[100])
{
    int i;

    for(i=0; i<a[i]!='\0'; i++)
    {

        if(a[i]=='1' || a[i]=='7' || a[i]=='9')
        {
            printf("Yes\n");
            break;
        }
        else
        {
            printf("No\n");
            break;
        }
    }
}

int main()
{
    char s[100];
    scanf("%s",s);
    sum(s);
}
