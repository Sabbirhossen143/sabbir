#include<stdio.h>
#include<string.h>
int main()
{
    char S[1000],A[100],B[100];

    int i,j,l;
while(scanf("%s",S)!=EOF){

   l=strlen(S);
   for(i=l-1;i>=0;i--){
    A[j]=S[i];
   }
   int count=0;
for(j=0;j<=strlen(A)/2;j++)
{
    if(A[j]!=S[i])
    {
        count++;
    }

}
printf("%d\n",count);
}
}
