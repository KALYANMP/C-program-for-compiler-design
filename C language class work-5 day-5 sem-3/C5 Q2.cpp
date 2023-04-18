#include <stdio.h>
int main() {
    //int n;
    //printf("Enter the size of the square matrix: ");
    //scanf("%d", &n);
    int matrix[3][3]={{1, 2, 3}, {4, 5, 6}, {7, 8,9}};
    //printf("Enter the elements of the matrix:\n");
    //for (int i = 0; i < n; i++) {
        //for (int j = 0; j < n; j++) {
           // scanf("%d", &matrix[i][j]);
       // }
    //}
    printf("The diagonal elements are: ");
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        printf("%d ", matrix[i][i]);
        sum += matrix[i][i];
    }
    printf("\n");
    printf("The sum of the diagonal elements is: %d\n", sum);
    return 0;
}

