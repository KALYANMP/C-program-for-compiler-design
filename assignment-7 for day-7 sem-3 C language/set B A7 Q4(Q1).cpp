#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "India";
    int i;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            str[i] = '$';
        }
    }
    printf("The new string is: %s\n", str);
    return 0;
}

