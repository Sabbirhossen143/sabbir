#include<stdio.h>
int main()
{
    int sum=0;
    char S[100];
    int a,b,x,i,y;
    for(i=S[1]; i<='\0'; i++)
    {
        scanf("%s",&S[i]);
}
    scanf("%d %d",&a,&b);
    for(i=S[1]; i<='\0'; i++)
    {

        if(S[i]=='+')
        {
            x=a+b;
            printf("%d",x);
        }
        else if(S[i]=='*')
        {
            y=a*b;
            printf("%d",y);
        }
}


        sum=x+y;
        printf("%d",sum);

}
