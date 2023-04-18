#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, *arr, max;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Error: memory allocation failed");
        return 0;
    }
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("The largest element in the array is %d", max);
    free(arr);
    return 0;
}

