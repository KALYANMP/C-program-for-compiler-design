#include <stdio.h>

int main() {
    int arr[] = {3, 5, 1, 8, 4, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];
    int second_largest = arr[0];
    int smallest = arr[0];
    int second_smallest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }

        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];
        }
    }

    printf("Second largest element: %d\n", second_largest);
    printf("Second smallest element: %d\n", second_smallest);

    return 0;
}
