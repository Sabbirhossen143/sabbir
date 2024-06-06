#include <stdio.h>
#include <ctype.h>

int main() {
    char str[30] = "Apple BANANA";

    char result[30];
    for (int i = 0; str[i] != '\0'; i++) {
        result[i] = tolower(str[i]);
    }

    printf("Input string      : %s\n", str);
    printf("Lowercase string  : %s\n", result);

    return 0;
}
