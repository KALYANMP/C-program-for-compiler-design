#include <stdio.h>
#include <string.h>
#define MAX_LINE_LENGTH 1024
int main() {
    FILE* input_file = fopen("input.txt", "r");
    FILE* output_file = fopen("output.txt", "w");
    if (input_file == NULL || output_file == NULL) {
        printf("Failed to open file.\n");
        return 1;
    }
    char line[MAX_LINE_LENGTH];
    while (fgets(line, MAX_LINE_LENGTH, input_file)) {
        char* red_position = strstr(line, "red");
        while (red_position) {
            strncpy(red_position, "blue", strlen("blue"));
            red_position = strstr(red_position + strlen("blue"), "red");
        }
        fprintf(output_file, "%s", line);
    }
    fclose(input_file);
    fclose(output_file);
    printf("File successfully modified.\n");
    return 0;
}

