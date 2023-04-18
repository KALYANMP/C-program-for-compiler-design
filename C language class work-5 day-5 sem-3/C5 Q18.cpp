#include <stdio.h>
int findMax(int arr[], int n);
int main() {
    int arr[100], n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Largest element in the array is %d", findMax(arr, n));
    return 0;
}
int findMax(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    } else {
        int max = findMax(arr, n - 1);
        if (arr[n - 1] > max) {
            return arr[n - 1];
        } else {
            return max;
        }
    }
}

