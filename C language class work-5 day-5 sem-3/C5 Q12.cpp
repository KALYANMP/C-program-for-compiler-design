#include <stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10
int main() {
    int matrix[MAX_ROWS][MAX_COLS], i, j, rows, cols;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter the elements of the matrix:\n");
    for(i=0; i<rows; i++) {
        for(j=0; j<cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    if(rows != cols) {
        printf("The given matrix is not a square matrix. So, it cannot be an identity matrix.\n");
        return 0;
    }
    for(i=0; i<rows; i++) {
        for(j=0; j<cols; j++) {
            if(i == j) {
                if(matrix[i][j] != 1) {
                    printf("The given matrix is not an identity matrix.\n");
                    return 0;
                }
            }
            else {
                if(matrix[i][j] != 0) {
                    printf("The given matrix is not an identity matrix.\n");
                    return 0;
                }
            }
        }
    }
    printf("The given matrix is an identity matrix.\n");
    return 0;
}

