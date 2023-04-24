#include <stdio.h>
int main() {
    int numRows;
    printf("Enter the number of rows: ");
    scanf("%d", &numRows);
	float denominator = 10.0;
    for (int i = 1; i <= numRows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%.1f ", j / denominator);
        }
        printf("\n");
    }
	return 0;
}
