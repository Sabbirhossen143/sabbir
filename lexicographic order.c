#include <stdio.h>
#include <string.h>

int main() {
   char a[5][50], temp[50];
   int n;
   printf("Enter n words: ");
   scanf("%d",&n);
   for (int i = 0; i < n; ++i) {
      fgets(a[i], sizeof(a[i]), stdin);
   }

   for (int i = 0; i < n; ++i) {
      for (int j = i + 1; j < n; ++j)
        {
         if (strcmp(a[i], a[j]) > 0)
         {
            strcpy(temp, a[i]);
            strcpy(a[i], a[j]);
            strcpy(a[j], temp);
         }
      }
   }
   printf("\nIn the lexicographical order: ");
   for (int i = 0; i < n; ++i) {
      fputs(a[i], stdout);
   }
   return 0;
}
