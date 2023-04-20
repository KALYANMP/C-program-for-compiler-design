#include <stdio.h>
int main() {
    int m, n, i;
    printf("Enter value of m: ");
    scanf("%d", &m);
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Odd numbers between %d and %d:\n", m, n);
    for(i=m; i<=n; i++) {
        if(i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\nEven numbers between %d and %d:\n", m, n);
    for(i=m; i<=n; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}

