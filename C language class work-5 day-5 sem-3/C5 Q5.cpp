#include <stdio.h>
int main() {
    int roll_no, marks1, marks2, marks3;
    char name[50];
    printf("Enter the roll number: ");
    scanf("%d", &roll_no);
    printf("Enter the name: ");
    scanf("%s", name);
    printf("Enter the marks of three subjects: ");
    scanf("%d %d %d", &marks1, &marks2, &marks3);
    int total = marks1 + marks2 + marks3;
    float percentage = (float) total / 3;
    printf("Total marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    if (percentage >= 60) {
        printf("First division\n");
    } else if (percentage >= 50) {
        printf("Second division\n");
    } else if (percentage >= 40) {
        printf("Third division\n");
    } else {
        printf("Failed\n");
    }
    return 0;
}

