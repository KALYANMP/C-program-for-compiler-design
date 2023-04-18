#include <stdio.h>
void factorial(int n, int *result);
int main() {
    int n = 5;
    int result = 1;
    factorial(n, &result);
    printf("The factorial of %d is %d", n, result);
    return 0;
}
void factorial(int n, int *result) {
    int i;
    for (i = 1; i <= n; i++) {
        *result *= i;
    }
}
