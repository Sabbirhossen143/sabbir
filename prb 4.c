#include<stdio.h>
#include<string.h>
int main()
{
  char s[100];
  int T,i,a,j;
  scanf("%d",&T);
  if(1<=T && T<=5){
    for(i=0;i<=T;i++){
        gets(s);

    int c=0;
    int n=strlen(s);
    for(j=1;j<=n/2;j++){
        if(s[j]==s[n-j-1])
            c++;
    }
    if(c==j)
        printf("yes");
  }
  }
else
    return 0;
}
