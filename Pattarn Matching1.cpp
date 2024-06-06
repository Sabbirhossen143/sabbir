#include<iostream>
#include<string.h>

void searching(char *pat, char *txt)
{
    int M = strlen(pat);
    int N = strlen(txt);

    for (int i = 0; i <= N - M; i++)
    {
        int j;

        for (j = 0; j < M; j++)
        {
            if (txt[i + j] != pat[j])
                break;
        }
        if (j == M)
        {
            cout<<"Pattern found index "<<i<<endl;
        }
    }
}
int main()
{
    char *txt = "AABAACAADAABAAABAA";
    char *pat = "AABA";
    searching(pat, txt);
    return 0;
}
