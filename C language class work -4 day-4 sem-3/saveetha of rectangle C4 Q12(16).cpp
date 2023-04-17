#include <stdio.h>
int main() {
    int width, height, i, j;
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    printf("Enter the height of the rectangle: ");
    scanf("%d", &height);
    for(i = 1; i <= height; i++) {
        for(j = 1; j <= width; j++) {
            if(i == 1 || i == height || j == 1 || j == width) {
                printf("$");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

