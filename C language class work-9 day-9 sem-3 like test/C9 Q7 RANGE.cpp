#include <stdio.h>
int main() {
    int p, q, exclude;
    printf("Enter the starting value (p): ");
    scanf("%d", &p);
    printf("Enter the ending value (q): ");
    scanf("%d", &q);
    printf("Enter the digit to exclude: ");
    scanf("%d", &exclude);
    printf("Numbers within range [%d, %d] excluding digit %d:\n", p, q, exclude);
    for (int i = p; i <= q; i++) {
        int num = i;
        while (num != 0) {
            int digit = num % 10;
            if (digit == exclude) {
                goto skip;
            }
            num /= 10;
        }
        printf("%d\n", i);
        skip: continue;
    }
    return 0;
}

