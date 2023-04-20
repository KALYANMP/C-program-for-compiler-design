#include <stdio.h>
#include <ctype.h>
int main() {
    char c;
    printf("Enter a string: ");
    while ((c = getchar()) != '\n') {
        if (islower(c)) {
            c = toupper(c);
        } else if (isupper(c)) {
            c = tolower(c);
        }
        putchar(c);
    }
    return 0;
}
