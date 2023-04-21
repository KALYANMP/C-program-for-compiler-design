#include <stdio.h>
int main() {
    char source[100], destination[100];
    int i = 0;
    printf("Enter source string: ");
    fgets(source, 100, stdin);
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
    printf("Source string: %s", source);
    printf("Copied string: %s", destination);
    return 0;
}

