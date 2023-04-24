#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        int years_to_go = 18 - age;
        printf("You are not eligible to vote yet. You need to wait for %d more year(s).\n", years_to_go);
    }
    return 0;
}

