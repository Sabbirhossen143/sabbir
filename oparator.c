#include<stdio.h>
#include<string.h>
int main()
{
   int a,b,i,j;
   int x=0,sum=0,tum=0,y=0;
   char S[20];
   for(i=0;i<='\0';i++)
   {
       scanf("%s",&S[i]);
   }
   int l=strlen(S);
   //printf("%d",l);
   scanf("%d %d",&a,&b);

for(i=0;i<l;i++)
   {

    if(S[i]=='+'){
            x=0;
        x=a+b;
        sum+=x;
    }
    if(S[i]=='*'){
            y=0;
        y=a*b;
        tum+=y;
    }
   }
   int totall;
   totall=sum+tum;
   printf("%d",totall);
}
