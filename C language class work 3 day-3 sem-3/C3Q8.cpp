#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main ()
{
    char str[50], str1[50], rem[100];
    int x = 0, y = 0, z = 0;
 
    printf ("Enter The Main String:\n");
    fflush (stdin);
    gets (str);
 
    printf ("Enter The Second String To Find:\n");
    gets (str1);
 
    for (x = 0; str[x]!= '\0'; x++)
    {
        for (y = 0; str1[y] != '\0'; y++)
        {
            if (str[x] == str1[y])
            {
                continue;
            }
            else
            {
                rem[z] = str1[y];
                z ++;
            }
        }
        rem[z] = '\0';
        strcpy (str1, rem);
        z = 0;
    }
 
    printf ("Removed The Characters From The Second String: %s\n", rem);
 
    return 0;
}
