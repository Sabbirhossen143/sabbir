#include<stdio.h>
int main()
{
    int m,n,o,p,x,y,z;
    while(scanf("%d %d %d %d",&m,&n,&o,&p)!=EOF)
    {
        y=m-n;
        z=o-p;
        x=y+z;
        printf("%d\n",x);

    }
    return 0;
}
