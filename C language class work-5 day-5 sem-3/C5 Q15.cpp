#include <stdio.h>
#include <string.h>
int main() {
    char string[1000];
    int count[256] = {0};
    int i;
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);
    for (i = 0; string[i] != '\0'; i++) {
        count[(int)string[i]]++;
    }
    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("'%c' occurs %d times.\n", i, count[i]);
        }
    }
    return 0;
}

