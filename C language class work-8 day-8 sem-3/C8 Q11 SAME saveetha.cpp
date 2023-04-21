#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int arr[MAX_SIZE], n, x, i, j;
    printf("Enter the number of elements in the array (up to %d): ", MAX_SIZE);
    scanf("%d", &n);
    printf("Enter the elements of the array in ascending order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &x);
    int left = 0, right = n - 1, mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == x) {
            printf("Element found at position %d\n", mid + 1);
            return 0;
        }
        else if (arr[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    printf("Element not found\n");
    return 0;
}

