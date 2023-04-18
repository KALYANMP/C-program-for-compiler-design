#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char string[1000];
    int i, j;
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);
    for (i = 0, j = 0; string[i] != '\0'; i++) {
        if (isalpha(string[i])) {
            string[j++] = string[i];
        }
    }
    string[j] = '\0';
    printf("Result: %s", string);
    return 0;
}

