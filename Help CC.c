#include<stdio.h>
int main()
{
  int T,i,j;
  int r[10];
  scanf("%d",&T);
  for(j=0;j<T;j++){
        int sum=0;
  for(i=0;i<6;i++){
    scanf("%d",&r[i]);
  }
  for(i=0;i<6;i++){
        sum=sum+r[i];
}
if(sum==0)
    printf("Yes\n");
else
    printf("No\n");
}
}
