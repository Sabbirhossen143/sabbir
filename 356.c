#include<stdio.h>
int main()
{
    int X,Y,a,b,c,d;
    while(scanf("%d %d",&X,&Y)!=EOF)
    {
        if(X==Y)
        {
            a=X*Y;
            b=X*Y*10;
            c=X*Y*25;
            d=X*Y*55;
            if(X>=0 && X<=9 && Y>=0 && Y<=9)
                printf("%d\n",a);
            else if(X>=10 && X<=19 && Y>=10 && Y<=19)
                 printf("%d\n",b);
            else if(X>=20 && X<=49 && Y>=20 && Y<=49)
                  printf("%d\n",c);
            else if(X>=50 && X<=100 && Y>=50 && Y<=100)
                 printf("%d\n",d);
        }
        if(X!=Y)
        {
            a=X+Y;
            b=X+Y+10;
            c=X+Y+25;
            d=X+Y+55;
            if(X>=0 && X<=9 && Y>=0 && Y<=9)
                printf("%d\n",a);
            else if(X>=10 && X<=19 && Y>=10 && Y<=19)
                 printf("%d\n",b);
            else if(X>=20 && X<=49 && Y>=20 && Y<=49)
                  printf("%d\n",c);
            else if(X>=50 && X<=100 && Y>=50 && Y<=100)
                 printf("%d\n",d);
        }

    }
    return 0;
}

