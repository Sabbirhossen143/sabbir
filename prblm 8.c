#include <stdio.h>
    void main ()
    {

        int number[30];
        int i, N, a, j;

        //printf("Enter the value of n\n");
        scanf("%d", &N);

       // printf("enter the numbers\n");
        for (i = 0; i < N; ++i)
            scanf("%d", &number[i]);

        //printf("Enter the position of the element to split the array \n");
        scanf("%d", &a);

        for (i = 0; i < a; ++i)
        {

            number[N] = number[0];
            for (j = 0; j < N; ++j)
            {
                number[j] = number[j + 1];
            }

        }

        printf("The resultant array is\n");

        for (i = 0; i < N; ++i)
        {
            printf("%d\n", number[i]);
        }
    }
