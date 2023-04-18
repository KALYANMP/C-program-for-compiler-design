#include <stdio.h>
int main() {
    int mat1[10][10], mat2[10][10], row1, col1, row2, col2;
    int i, j, equal = 1;
    printf("Enter the number of rows and columns of the first matrix:\n");
    scanf("%d%d", &row1, &col1);
    printf("Enter the elements of first matrix:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter the number of rows and columns of the second matrix:\n");
    scanf("%d%d", &row2, &col2);
    printf("Enter the elements of second matrix:\n");
    for (i = 0; i < row2; i++) {
        for (j = 0; j < col2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    if (row1 != row2 || col1 != col2) {
        printf("Matrices are not equal.\n");
        return 0;
    }
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            if (mat1[i][j] != mat2[i][j]) {
                equal = 0;
                break;
            }
        }
        if (equal == 0) {
            break;
        }
    }
    if (equal == 1) {
        printf("Matrices are equal.\n");
    } else {
        printf("Matrices are not equal.\n");
    }
    return 0;
}

