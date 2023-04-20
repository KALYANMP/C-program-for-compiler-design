#include <stdio.h>
int main() {
    int arr1[100], arr2[100], mergedArr[200];
    int size1, size2, i, j;
    printf("Enter the size of first array: ");
    scanf("%d", &size1);
    printf("Enter elements of first array: ");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of second array: ");
    scanf("%d", &size2);
    printf("Enter elements of second array: ");
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    for (i = 0; i < size1; i++) {
        mergedArr[i] = arr1[i];
    }
    for (i = 0, j = size1; i < size2; i++, j++) {
        mergedArr[j] = arr2[i];
    }
    printf("Merged array: ");
    for (i = 0; i < size1 + size2; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");
    return 0;
}

