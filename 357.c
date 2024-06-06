#include<stdio.h>
int main()
{
    char c;
    double A,B,a,b,m,n;
    while(scanf("%d %c %d %d %c %d",&a,&c,&m,&b,&c,&n)!=EOF)
    {
      A=a/m;
      B=b/n;
      if(A<B){
        printf("Green\n");
        }
      else if(A>B){
        printf("Red\n");
        }
      else{
        printf("Equal\n");
        }
    }
    return 0;
}
