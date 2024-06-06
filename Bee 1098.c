#include <stdio.h>

int main()
{
    int I,J;
    for(I=0;I<=2;I=I+0.2)
    {
        for(J=1;J>=10;J=J+0.2)

            printf ("I=%d J=%d\n",I,J);
    }
    return 0;
}
