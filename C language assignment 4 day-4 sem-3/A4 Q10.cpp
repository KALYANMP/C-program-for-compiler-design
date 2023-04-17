#include <stdio.h>
union shape {
    float radius;
    struct {
        float length;
        float width;
    } rectangle;
};
int main() {
    union shape s;
    int choice;
    printf("Enter 1 for circle, 2 for rectangle: ");
    scanf("%d", &choice);
    if(choice == 1) {
        printf("Enter the radius of the circle: ");
        scanf("%f", &s.radius);
        float area = 3.14 * s.radius * s.radius;
        printf("Area of the circle is: %f", area);
    }
    else if(choice == 2) {
        printf("Enter the length of the rectangle: ");
        scanf("%f", &s.rectangle.length);
        printf("Enter the width of the rectangle: ");
        scanf("%f", &s.rectangle.width);
        float area = s.rectangle.length * s.rectangle.width;
        printf("Area of the rectangle is: %f", area);
    }
    else {
        printf("Invalid choice");
    }
    return 0;
}

