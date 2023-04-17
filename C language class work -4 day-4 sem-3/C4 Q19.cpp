#include <stdio.h>
void input_array(int *arr, int size);
void print_array(int *arr, int size);
void sort_array(int *arr, int size, int (*compare)(int, int));
int ascending(int a, int b);
int descending(int a, int b);
int main() {
    int size, choice;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements:\n");
    input_array(arr, size);
    printf("Enter the sorting order (1 for ascending, 2 for descending): ");
    scanf("%d", &choice);
    int (*compare)(int, int);
    if (choice == 1) {
        compare = &ascending;
    } else if (choice == 2) {
        compare = &descending;
    } else {
        printf("Invalid choice\n");
        return 0;
    }
    sort_array(arr, size, compare);
    printf("Sorted array:\n");
    print_array(arr,size);

    return 0;
    }
void input_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}
void print_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void sort_array(int *arr, int size, int (*compare)(int, int)) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if ((*compare)(arr[i], arr[j]) > 0) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int ascending(int a, int b) {
    return a - b;
}
int descending(int a, int b) {
    return b - a;
}

