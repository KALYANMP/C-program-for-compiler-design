#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] < x) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return -1;
}
int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 12;
    int index = binarySearch(arr, 0, n - 1, x);
    if (index == -1) {
        printf("Element not found\n");
    }
    else {
        printf("Element found at position %d\n", index + 1);
    }
    return 0;
}

