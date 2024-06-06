#include <stdio.h>
#include <string.h>

int main() {
   char str[5][50], temp[50];
   for (int i = 0; i < 2; ++i) {
      fgets(str[i], sizeof(str[i]), stdin);
   }

   for (int i = 0; i < 2; ++i) {
      for (int j = i + 1; j < 2; ++j)
        {
         printf("%d",strcmp(str[i], str[j]));
        }
        }

}
