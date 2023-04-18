#include <stdio.h>
int isPrime(int n, int i);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (isPrime(n, 2)) {
        printf("%d is a prime number.", n);
    } else {
        printf("%d is not a prime number.", n);
    }
    return 0;
}
int isPrime(int n, int i) {
    if (n <= 2) {
        return (n == 2) ? 1 : 0;
    } else if (n % i == 0) {
        return 0;
    } else if (i * i > n) {
        return 1;
    } else {
        return isPrime(n, i + 1);
    }
}

