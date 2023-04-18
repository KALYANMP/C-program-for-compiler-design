#include <stdio.h>
int main() {
    FILE *fp;
    int count = 0;
    char c;
    fp = fopen("filename.txt", "r");
    if (fp == NULL) {
        printf("Error: file not found");
        return 0;
    }
    while ((c = fgetc(fp)) != EOF) {
        if (c == '\n') {
            count++;
        }
    }
    fclose(fp);
    printf("The number of lines in the file is %d", count);
    return 0;
}

