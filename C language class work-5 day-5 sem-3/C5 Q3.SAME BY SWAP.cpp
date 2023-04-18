#include <stdio.h>
#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void findMinMax(int arr[], int n, int *max, int *min) {
    int i;
    *max = arr[0];
    *min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > *max) {
            swap(&arr[i], max);
        }
        if (arr[i] < *min) {
            swap(&arr[i], min);
        }
    }
}
int main() {
    int arr[] = { 12, 8, 15, 55, 70 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int max, min;
    findMinMax(arr, n, &max, &min);
    printf("Maximum value in the array is: %d\n", max);
    printf("Minimum value in the array is: %d\n", min);
    return 0;
}

