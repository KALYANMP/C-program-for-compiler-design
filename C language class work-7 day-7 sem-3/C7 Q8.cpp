#include <stdio.h>
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
int main() {
    float sum = 0.0;
    for (int i = 1; i <= 5; i++) {
        sum += (float) factorial(i) / i;
    }
    printf("The sum of the series is %.2f\n", sum);
    return 0;
}

