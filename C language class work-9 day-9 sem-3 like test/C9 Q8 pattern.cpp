#include <stdio.h>
int main() {
    int rows, i, j, k;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) {
        for (j = rows - i; j >=rows; j++) {
            printf("  ");
        }
        for (j= i; j>= 1; j--) {
            printf("%d ", j);
    }
        printf("\n");
    }
    return 0;
}

