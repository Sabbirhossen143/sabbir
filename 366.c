#include<stdio.h>
int main()
{
    int x,y;
    int i=0;

    while(scanf("%d %d",&x,&y)!=EOF){
    if(x==0 && y==0){
        break;
    }


    if(x>y)
      printf("%d\n",x);
    else
      printf("%d\n",y);

}
}

