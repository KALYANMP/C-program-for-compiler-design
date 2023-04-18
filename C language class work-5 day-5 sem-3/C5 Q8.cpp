#include <stdio.h>
int main() {
    int n;
    float sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Harmonic series: ");
    for (int i = 1; i <= n; i++) {
        printf("1/%d", i);
        if (i != n) {
            printf(" + ");
        }
        sum += 1.0/i;
    }
    printf("\n");
    printf("Sum of the series: %f", sum);
    return 0;
}
