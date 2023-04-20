#include <stdio.h>
int main() {
    int n, k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the k-th smallest element to find: ");
    scanf("%d", &k);
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    int count[max - min + 1];
    for (int i = 0; i < max - min + 1; i++) {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        count[arr[i] - min]++;
    }
    int sum = 0;
    for (int i = 0; i < max - min + 1; i++) {
        sum += count[i];
        if (sum >= k) {
            printf("%d is the %dth smallest element in the array.\n", i + min, k);
            return 0;
        }
    }
    printf("There are less than k elements in the array.\n");
    return 0;
}

