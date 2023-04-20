#include <stdio.h>
int main() {
    int num_students, num_total_users, num_staff_users;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    printf("Enter the number of total users: ");
    scanf("%d", &num_total_users);
    printf("Enter the number of staff users: ");
    scanf("%d", &num_staff_users);
    int num_non_teaching_staff_users = num_staff_users / 3;
    int total_staff_users = num_staff_users + num_non_teaching_staff_users;
    int total_users = num_students + total_staff_users;
    printf("Number of students: %d\n", num_students);
    printf("Number of total users: %d\n", num_total_users);
    printf("Number of staff users: %d\n", num_staff_users);
    printf("Number of non-teaching staff users: %d\n", num_non_teaching_staff_users);
    printf("Total staff users (including non-teaching staff): %d\n", total_staff_users);
    printf("Total number of users: %d\n", total_users);
    return 0;
}

