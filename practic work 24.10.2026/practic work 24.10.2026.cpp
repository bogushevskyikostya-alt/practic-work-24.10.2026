/*  Завдання 1
#include <stdio.h>

//  strcmp
int my_strcmp(const char* s1, const char* s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char*)s1 - *(unsigned char*)s2;
}

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[] = "Hello";

    printf("Порівняння \"%s\" та \"%s\": %d\n", str1, str2, my_strcmp(str1, str2));
    printf("Порівняння \"%s\" та \"%s\": %d\n", str1, str3, my_strcmp(str1, str3));

    return 0;
}*/
/*Завдання 2
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[256];
    int letters = 0;
    int digits = 0;
    int others = 0;

    printf("Введіть рядок: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int i = 0;
        while (str[i] != '\0' && str[i] != '\n') {
            if (isalpha((unsigned char)str[i])) {
                letters++;
            }
            else if (isdigit((unsigned char)str[i])) {
                digits++;
            }
            else {
                others++;
            }
            i++;
        }
    }

    printf("\nРезультати підрахунку:\n");
    printf("- Літер: %d\n", letters);
    printf("- Цифр: %d\n", digits);
    printf("- Інших символів: %d\n", others);

    return 0;
}
*/
