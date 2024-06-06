#include<stdio.h>
int main(){
int i,j,ans;
int a[10][10];
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d ",&a[i][j]);
    }
}
int sum=0;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
   sum=sum+a[i][j];
}
}
for(i=0;i<3;i++){
       int sum1=0;
    for(j=0;j<3;j++){
   sum1=sum1+a[i][j];
}
if(sum==sum1)
    ans=1;
else{
    ans=0;
    break;
}
}
for(i=0;i<3;i++){
      int  sum2=0;
    for(j=0;j<3;j++){
   sum2=sum2+a[i][j];
}
if(sum==sum2)
    ans=1;
else{
    ans=0;
    break;
}
}
if(ans=1)
    printf("its Magic Square\n");
else
    printf("its not Magic Square\n");
}
