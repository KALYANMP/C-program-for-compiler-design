#include <stdio.h>
int main() {
    char str[100];
    int len = 0;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    while (str[len] != '\0') {
        len++;
    }
    printf("The length of the string is %d\n", len);
    return 0;
}
