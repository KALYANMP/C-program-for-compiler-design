#include <stdio.h>
int is_armstrong(int n) {
    int sum = 0, temp = n, digits = 0;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }
    return sum == n;
}
int is_perfect(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (is_armstrong(n)) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }
    if (is_perfect(n)) {
        printf("%d is a Perfect number.\n", n);
    } else {
        printf("%d is not a Perfect number.\n", n);
    }
    return 0;
}

