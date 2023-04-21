#include <stdio.h>
int stringLength(char*);
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = stringLength(str);
    printf("The length of the string is: %d\n", length);
    return 0;
}
int stringLength(char *str) {
    int length = 0;
    while(*str != '\0') {
        length++;
        str++;
    }
    return length;
}

