#include <stdio.h>
void findMax(int *a, int *b, int *max);
int main() {
    int a, b, max;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    findMax(&a, &b, &max);
    printf("The maximum number is %d", max);
    return 0;
}
void findMax(int *a, int *b, int *max) {
    if (*a > *b) {
        *max = *a;
    } else {
        *max = *b;
    }
}

