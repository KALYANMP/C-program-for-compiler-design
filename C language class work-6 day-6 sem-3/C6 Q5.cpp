#include <stdio.h>
int reverse(int num);
int main() {
    int num, reversed;
    printf("Enter a number to reverse: ");
    scanf("%d", &num);
    reversed = reverse(num);
    printf("The reversed number is: %d\n", reversed);
    return 0;
}
int reverse(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

