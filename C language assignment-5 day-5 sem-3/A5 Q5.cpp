#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE_LENGTH 1024
int main() {
    char file_name[100];
    printf("Enter the name of the input file: ");
    scanf("%s", file_name);
    FILE* input_file = fopen(file_name, "r");
    if (input_file == NULL) {
        printf("Failed to open input file.\n");
        return 1;
    }
    FILE* output_file = fopen("statistics.txt", "w");
    if (output_file == NULL) {
        printf("Failed to create output file.\n");
        return 1;
    }
    int char_count[26] = {0};
    char line[MAX_LINE_LENGTH];
    while (fgets(line, MAX_LINE_LENGTH, input_file)) {
        int len = strlen(line);
        for (int i = 0; i < len; i++) {
            if (line[i] >= 'a' && line[i] <= 'z') {
                char_count[line[i] - 'a']++;
            } else if (line[i] >= 'A' && line[i] <= 'Z') {
                char_count[line[i] - 'A']++;
            }
        }
    }
    for (int i = 0; i < 26; i++) {
        fprintf(output_file, "%c: %d\n", 'a' + i, char_count[i]);
    }
    fclose(input_file);
    fclose(output_file);
    printf("Statistics file created.\n");
    return 0;
}

