#include <stdio.h>
int main() {
    int Arr[5] = {12, 56, 34, 78, 100};
    int N = 5;
    int i, max;

    max = Arr[0];

    for (i = 1; i < N; i++) {
        if (Arr[i] > max) {
            max = Arr[i]; 
        }
    }

    printf("Largest element in the array is: %d\n", max);

    return 0;
}
