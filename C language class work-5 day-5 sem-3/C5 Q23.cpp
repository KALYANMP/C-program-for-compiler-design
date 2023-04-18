#include <stdio.h>
void add(int *a, int *b) {
    *a += *b;
}
int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    add(&num1, &num2);
    printf("The sum of the two numbers is %d.\n", num1);
    return 0;
}
