#include <stdio.h>
int main() {
    int arr1[] = {10, 20, 30, 40, 50, 60};
    int arr2[] = {70, 80, 90, 100, 110, 120};
    int n1 = sizeof(arr1) / sizeof(int);
    int n2 = sizeof(arr2) / sizeof(int);
    int i, j;
    int arr3[n1 + n2];
    for (i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }
    for (j = 0; j < n2; j++) {
        arr3[i] = arr2[j];
        i++;
    }
    printf("The concatenated array is: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }
    return 0;
}

