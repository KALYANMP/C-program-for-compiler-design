#include <stdio.h>
#include <string.h>
void reversestring(char *str);
int main() {
	char str[100];
	printf("enter a string: ");
	fgets(str, sizeof(str), stdin);
	reversestring(str);
	printf("Reversed string: %s\n", str);
    return 0;
}
void reversestring(char*str) {
	if(*str=='\0') {
		return;
	}
	reversestring(str+1);
	printf("%c", *str);
}

