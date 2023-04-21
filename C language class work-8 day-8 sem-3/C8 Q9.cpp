#include <stdio.h>
int is_prime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int n, count = 0;
    printf("Enter the number of prime numbers you want to print: ");
    scanf("%d", &n);
    printf("The first %d prime numbers are: ", n);
    for (int i = 2; count < n; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n");
    printf("Enter the value of n to find the nth prime number: ");
    scanf("%d", &n);
    count = 0;
    for (int i = 2; ; i++) {
        if (is_prime(i)) {
            count++;
            if (count == n) {
                printf("The %dth prime number is %d\n", n, i);
                break;
            }
        }
    }
    return 0;
}

