#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
    scanf("%d",&a);

    b=pow(a,2);
    c=(b%10);
    d=(b/10);
    e=(d%10);
    f=d/10;
    g=f%10;
    h=f/10;
    i=h%10;
    j=c+e+g+i;

    k=pow(j,2);
    l=b-k;
    m=pow(l,2);
    n=(m%10);
    printf("%d",n);

    return 0;





}
