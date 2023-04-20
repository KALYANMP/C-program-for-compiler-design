#include <stdio.h>
void findMaxMin(int arr[], int size, int* max, int* min) {
    *max = arr[0]; 
    *min = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) { 
            *min = arr[i];
        }
    }
}
int main() {
    int arr[5];
    int max, min;
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    findMaxMin(arr, 5, &max, &min); 
    printf("Maximum value is %d\n", max);
    printf("Minimum value is %d\n", min);
    return 0;
}

