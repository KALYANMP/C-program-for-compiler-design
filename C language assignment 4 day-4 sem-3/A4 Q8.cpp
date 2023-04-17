#include <stdio.h>
union mydata {
    int i;
    float f;
};
int main() {
    union mydata data;
    int choice;
    printf("Enter 1 for integer, 2 for float: ");
    scanf("%d", &choice);
    if(choice == 1) {
        printf("Enter an integer value: ");
        scanf("%d", &data.i);
        printf("You entered an integer value: %d", data.i);
    }
    else if(choice == 2) {
        printf("Enter a float value: ");
        scanf("%f", &data.f);
        printf("You entered a float value: %f", data.f);
    }
    else {
        printf("Invalid choice");
    }
    return 0;
}

