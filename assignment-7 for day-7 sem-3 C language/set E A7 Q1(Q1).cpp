#include <stdio.h>
#include <math.h>
int main() {
    int i, num, digit, sum;
    printf("Armstrong numbers between 1 and 500 are:\n");
    for (i = 1; i <= 500; i++) {
        num = i;
        sum = 0;
        while (num > 0) {
            digit = num % 10;
            sum += pow(digit, 3);
            num /= 10;
        }
        if (i == sum) {
            printf("%d ", i);
        }
    }
    return 0;
}

