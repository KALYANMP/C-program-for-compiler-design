#include <stdio.h>
#include <string.h>
int main() {
    char text[] = "programming does wonders in the world";
    char longest_word[20];
    char *word;
    int length = 0;
    word = stroke(text, " ");
    while (word != NULL) {
        if (strlen(word) > length) {
            length = strlen(word);
            strcpy(longest_word, word);
        }
        word = strtok(NULL, " ");
    }
    printf("Longest word in the text is: %s", longest_word);
    return 0;
}

