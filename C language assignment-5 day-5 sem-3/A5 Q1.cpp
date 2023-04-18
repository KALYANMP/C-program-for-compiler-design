#include <stdio.h>
#include <string.h>
#define MAX_LINE_LENGTH 1024
int main() {
    FILE *input_file = fopen("input.txt", "r");
    FILE *output_file = fopen("error_log.txt", "w");
    char line[MAX_LINE_LENGTH];
    if (input_file == NULL || output_file == NULL) {
        printf("Error: could not open input or output file\n");
        return 1;
    }
    while (fgets(line, MAX_LINE_LENGTH, input_file) != NULL) {
        if (strstr(line, "error") != NULL) {
            fputs(line, output_file);
        }
    }
    fclose(input_file);
    fclose(output_file);
    FILE *error_file = fopen("error_log.txt", "r");
    if (error_file == NULL) {
        printf("Error: could not open error_log.txt file\n");
        return 1;
    }
    while (fgets(line, MAX_LINE_LENGTH, error_file) != NULL) {
        printf("%s", line);
    }
    fclose(error_file);
    return 0;
}

