#include<stdio.h>
int main()
{
    int a,sum=0,b,c,rem,d,e,f,g,h;

  while(scanf("%d",&a)!=EOF)
  {
      if(32<=a && a<=99)
 {
      b=pow(a,2);
      f=b;
    while(b!=0)
      {
          rem=b%10;
          sum=sum+rem;
          b=b/10;
      }
      c=sum;
      d=pow(c,2);
      e=f-d;
      g=pow(e,2);
      h=g%10;


          printf("%d\n",h);
  }
}
return 0;
}
