#include <stdio.h>
int main() {
    int Rows, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &Rows);
    for (i = 1; i <= Rows; i++) {
        for (j = 1; j <= Rows - i; j++) {
            printf("   ");
        }
        for (j = i; j >= 1; j--) {
            printf("%-4d", j);
        }
        printf("\n");
    }
    return 0;
}
