#include <stdio.h>
struct Car {
  char brand[50];
  char model[50];
  int year;
};
int main() {
  struct Car car1, car2, car3;
  printf("Enter the brand, model, and year of the first car: ");
  scanf("%s %s %d", car1.brand, car1.model, &car1.year);
  printf("Enter the brand, model, and year of the second car: ");
  scanf("%s %s %d", car2.brand, car2.model, &car2.year);
  printf("Enter the brand, model, and year of the third car: ");
  scanf("%s %s %d", car3.brand, car3.model, &car3.year);
  printf("%s %s %d\n", car1.brand, car1.model, car1.year);
  printf("%s %s %d\n", car2.brand, car2.model, car2.year);
  printf("%s %s %d\n", car3.brand, car3.model, car3.year);
  return 0;
}
