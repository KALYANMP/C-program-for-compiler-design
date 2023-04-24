#include <stdio.h>
int isComposite(int n) {
    int i;
    for(i=2; i<=n/2; i++) {
        if(n%i == 0) {
            return 1; 
        }
    }
    return 0; 
}
int main() {
    int arr[100], i, n, count=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        if(isComposite(arr[i])) {
            count++;
        }
    }
    printf("There are %d composite numbers in the array.\n", count);
    printf("The composite numbers in the array are: ");
    for(i=0; i<n; i++) {
        if(isComposite(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}

