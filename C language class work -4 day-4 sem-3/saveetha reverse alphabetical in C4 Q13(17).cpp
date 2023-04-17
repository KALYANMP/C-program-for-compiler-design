#include <stdio.h>
#include <string.h>
int main()
{
    char word[100], temp;
    int i, j, len;
    printf("Enter a word: ");
    scanf("%s", word);
    len = strlen(word);
    for (i = 0; i < len - 1; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (word[i] < word[j])
            {
                temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }
    printf("The word with letters arranged in reverse alphabetical order is: %s", word);
    return 0;
}

