#include <stdio.h>
int main() {
    int marks[4];
    int total = 0;
    float aggregate;
    char grade;
    printf("Enter marks in four subjects: ");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    aggregate = total / 4.0;
    if (aggregate >= 75.0) {
        grade = 'A';
    } else if (aggregate >= 60.0 && aggregate < 75.0) {
        grade = 'B';
    } else if (aggregate >= 50.0 && aggregate < 60.0) {
        grade = 'C';
    } else if (aggregate >= 40.0 && aggregate < 50.0) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    printf("Total marks: %d\n", total);
    printf("Aggregate marks: %.2f\n", aggregate);
    printf("Grade obtained: %c\n", grade);
    return 0;
}

