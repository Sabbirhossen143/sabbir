#include <stdio.h>
int main()
{
  int A;
  while(scanf("%d",&A)!=EOF)
  {
    if(A==2002)
       {
         printf("Acesso Permitido\n");
         break;
        }
    else
         printf("Senha Invalida\n");
 }
  return 0;
}

