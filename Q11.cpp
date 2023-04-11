#include <stdio.h>
#include <math.h>

int main() {
    int num;
    double root;

    printf("Enter a perfect square number: ");
    scanf("%d", &num);

    root = sqrt(num);

    if (root == (int) root) {
        printf("The square root of %d is %d and %d\n", num, (int) root, -(int) root);
    } else {
        printf("%d is not a perfect square number\n", num);
    }

    return 0;
}

