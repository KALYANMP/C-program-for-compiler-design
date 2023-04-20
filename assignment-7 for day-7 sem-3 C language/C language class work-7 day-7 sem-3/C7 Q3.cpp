#include <stdio.h>
int main() {
    int arr[100], size, index, new_elem;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the index at which to insert a new element: ");
    scanf("%d", &index);
    printf("Enter the value of the new element: ");
    scanf("%d", &new_elem);
    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = new_elem;
    size++;
    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

