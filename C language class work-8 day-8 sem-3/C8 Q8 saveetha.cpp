#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int len1, len2, i, j, freq1[26] = {0}, freq2[26] = {0};
    printf("Enter the first string: ");
    fgets(str1, 100, stdin);
    printf("Enter the second string: ");
    fgets(str2, 100, stdin);
    len1 = strlen(str1);
    len2 = strlen(str2);
    for(i = 0; i < len1; i++) {
        if(str1[i] >= 'A' && str1[i] <= 'Z') {
            str1[i] = str1[i] + 32;
        }
    }
    for(i = 0; i < len2; i++) {
        if(str2[i] >= 'A' && str2[i] <= 'Z') {
            str2[i] = str2[i] + 32;
        }
    }
    for(i = 0; i < len1; i++) {
        if(str1[i] >= 'a' && str1[i] <= 'z') {
            freq1[str1[i] - 'a']++;
        }
    }
    for(i = 0; i < len2; i++) {
        if(str2[i] >= 'a' && str2[i] <= 'z') {
            freq2[str2[i] - 'a']++;
        }
    }
    for(i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            printf("The two strings are not anagrams.\n");
            return 0;
        }
    }
    printf("The two strings are anagrams.\n");
    return 0;
}

