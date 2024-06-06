#include<stdio.h>
#include<string.h>

void searching(char *pattarn, char *input)
{
    int M = strlen(pattarn);
    int N = strlen(input);

    for (int i = 0; i <= N - M; i++)
    {
        int j;

        for (j = 0; j < M; j++)
        {
            if (input[i + j] != pattarn[j])
                break;
        }
        if (j == M)
        {
            printf("Pattern found at index %d \n", i);
        }
    }
}
int main()
{
    char a[100];
    printf("Enter any text to find 'GC' : ");
    fgets(a,strlen(a),stdin);
    char *input = a;
    char *pattarn = "GC";
    searching(pattarn, input);
    return 0;
}
