#include <stdio.h>
#include <math.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int square = num * num;
    printf("Square of %d = %d\n", num, square);
    float squareRoot = sqrt(num);
    printf("Square root of %d = %.2f\n", num, squareRoot);
    int cube = num * num * num;
    printf("Cube of %d = %d\n", num, cube);
    return 0;
}

