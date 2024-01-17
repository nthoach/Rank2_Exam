#include <stdio.h>
#include <string.h>

int main() {
    const char *str1 = "Hello, World!";
    const char *str2 = "aeiou";

    char *result = strpbrk(str1, str2);

    if (result != NULL) {
        printf("First vowel found: %c\n", *result);
    } else {
        printf("No vowels found.\n");
    }

    return 0;
}