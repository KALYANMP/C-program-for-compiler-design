#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    int total_sum = 0;
    int count = 0;
    for (int i = 0; i < rows; i++) {
        int row_sum = 0;
        for (int j = 0; j < cols; j++) {
            row_sum += matrix[i][j];
            count++;
        }
        total_sum += row_sum;
    }
    float avg = (float) total_sum / count;
    float sum_of_avgs = 0;
    for (int i = 0; i < rows; i++) {
        int row_sum = 0;
        for (int j = 0; j < cols; j++) {
            row_sum += matrix[i][j];
        }
        float row_avg = (float) row_sum / cols;
        sum_of_avgs += row_avg;
    }
    printf("Sum of averages: %.2f", sum_of_avgs);
    return 0;
}

