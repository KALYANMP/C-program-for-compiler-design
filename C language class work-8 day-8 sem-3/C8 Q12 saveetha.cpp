#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int arr[MAX_SIZE], n, m, nth, i, j, temp;
    printf("Enter the number of elements in the array (up to %d): ", MAX_SIZE);
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of n: ");
    scanf("%d", &nth);
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int mth_max = arr[n - m], nth_min = arr[nth - 1];
    int sum = mth_max + nth_min, diff = mth_max - nth_min;
    printf("The %dth maximum number is %d\n", m, mth_max);
    printf("The %dth minimum number is %d\n", nth, nth_min);
    printf("The sum of the %dth maximum and %dth minimum numbers is %d\n", m, nth, sum);
    printf("The difference between the %dth maximum and %dth minimum numbers is %d\n", m, nth, diff);
    return 0;
}

