#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int N=0,i, p=0, m=0, max=0;
    scanf("%d", &N);
    char arr[N+1];
    scanf(" %s",arr);
    int size = sizeof(arr)-1;
    for(i=0; i<size; i++)
        {
        if(arr[i] == '+')
        {
            m=0;
            p++;
            if(p > max)
            {
                max = p;
            }
        } else if(arr[i] == '-')
        {
            m++;
            p=0;
            if(m > max)
            {
                max = m;
            }
        }
    }
    printf("%d", max);

    return 0;
}
