#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int x,i;
        scanf("%d",&x);
        int arr[3];
        for(i=0;i<3;i++){
            scanf("%d",arr[i]);
        }
        int a=0;
        for(i=0;i<3;i++){
         if(arr[x-1]!=0){
            a++;
            x=arr[x-1];
         }
    }
    if(a==2)
        printf("YES\n");
    else
        printf("NO\n");
}
}
