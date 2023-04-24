#include <stdio.h>
int main() {
    int long num, reverse = 0, temp, remainder;
    printf("Enter the number:\n");
    scanf("%ld", &num);
    temp = num;
    while (num > 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    printf("Given number = %ld\n", temp);
    printf("Reverse of a Number is %ld\n", reverse);
    return 0;
}
