#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct student {
    char name[50];
    int roll_number;
    struct tm birthday;
    struct tm admission_date;
};
int calculate_age(struct tm birthday, struct tm admission_date) {
    int years = admission_date.tm_year - birthday.tm_year;
    if (admission_date.tm_mon < birthday.tm_mon || 
        (admission_date.tm_mon == birthday.tm_mon && admission_date.tm_mday < birthday.tm_mday)) {
        years--;
    }
    return years;
}
int main() {
    struct student s;
    printf("Enter student name: ");
    fgets(s.name, 50, stdin);
    printf("Enter roll number: ");
    scanf("%d", &s.roll_number);
    printf("Enter birthday (yyyy-mm-dd): ");
    scanf("%d-%d-%d", &s.birthday.tm_year, &s.birthday.tm_mon, &s.birthday.tm_mday);
    printf("Enter admission date (yyyy-mm-dd): ");
    scanf("%d-%d-%d", &s.admission_date.tm_year, &s.admission_date.tm_mon, &s.admission_date.tm_mday);
    int age = calculate_age(s.birthday, s.admission_date);
    printf("\nStudent Information\n");
    printf("Name: %s", s.name);
    printf("Roll Number: %d\n", s.roll_number);
    printf("Birthday: %d-%02d-%02d\n", s.birthday.tm_year, s.birthday.tm_mon, s.birthday.tm_mday);
    printf("Admission Date: %d-%02d-%02d\n", s.admission_date.tm_year, s.admission_date.tm_mon, s.admission_date.tm_mday);
    printf("Age at the time of admission: %d years\n", age);
    return 0;
}


