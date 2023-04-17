#include <stdio.h>
#include <string.h>
struct student {
    int roll_no;
    char stud_name[50];
    float mark1;
    float mark2;
    float mark3;
    float total_marks;
    float avg_marks;
};
int main() {
    int n, i, j;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student s[n], temp;
    for(i=0; i<n; i++) {
        printf("\nEnter the details of student %d\n", i+1);
        printf("Roll No.: ");
        scanf("%d", &s[i].roll_no);
        printf("Name: ");
        scanf("%s", s[i].stud_name);
        printf("Mark1: ");
        scanf("%f", &s[i].mark1);
        printf("Mark2: ");
        scanf("%f", &s[i].mark2);
        printf("Mark3: ");
        scanf("%f", &s[i].mark3);
        s[i].total_marks = s[i].mark1 + s[i].mark2 + s[i].mark3;
        s[i].avg_marks = s[i].total_marks / 3;
    }
    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            if(s[i].total_marks < s[j].total_marks) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\n\nSorted Records\n");
    printf("Roll No.\tName\t\tMark1\tMark2\tMark3\tTotal\tAverage\n");
    for(i=0; i<n; i++) {
        printf("%d\t\t%s\t\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", s[i].roll_no, s[i].stud_name, s[i].mark1, s[i].mark2, s[i].mark3, s[i].total_marks, s[i].avg_marks);
    }
    return 0;
}

