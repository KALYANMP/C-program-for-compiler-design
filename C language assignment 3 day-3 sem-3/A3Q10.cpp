#include <stdio.h> 
#include <string.h> 
int main() 
{ 
    char str[100];
    int len, i; 
    char *begin, *end, ch; 
    printf("Enter a string: ");
    gets(str);
    
    len = strlen(str); 
    begin = str; 
    end = str; 
    for (i = 0; i < len - 1; i++) 
        end++;
    for (i = 0; i < len / 2; i++) { 
        ch = *end; 
        *end = *begin; 
        *begin = ch; 
        begin++; 
        end--; 
    } 
    printf("Reverse of the string is: %s", str); 
    return 0; 
}
