#include<stdio.h>
int main()
{
 int L,i,sum;
 while(scanf("%d",&L)!=EOF)
 {
     if(L%2!=0){
      for(i=L;i<=7;i=i+2)
      {
          sum=sum+(L*L);

      }
      printf("%d\n",sum);
     }
     return 0;
 }
}
