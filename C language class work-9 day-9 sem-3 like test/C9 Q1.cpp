#include <stdio.h>
#include <math.h>
double power(double x, int n) {
   return pow(x, n);
}
double add(double x, int n) {
   return x + n;
}
double subtract(double x, int n) {
   return x - n;
}
double multiply(double x, int n) {
   return x * n;
}
double divide(double x, int n) {
   if (n == 0) {
      printf("Error: division by zero");
      return 0;
   }
   else {
      return x / n;
   }
}
int main() {
   double x;
   int n, choice;
   double result;
   printf("Enter the first operand (x): ");
   scanf("%lf", &x);
   printf("Enter the second operand (n): ");
   scanf("%d", &n);
   printf("Enter the operation to perform:\n");
   printf("1. x^n\n");
   printf("2. x + n\n");
   printf("3. x - n\n");
   printf("4. x * n\n");
   printf("5. x / n\n");
   printf("Enter your choice: ");
   scanf("%d", &choice);
   switch (choice) {
      case 1:
         result = power(x, n);
         printf("%.2lf ^ %d = %.2lf", x, n, result);
         break;
      case 2:
         result = add(x, n);
         printf("%.2lf + %d = %.2lf", x, n, result);
         break;
      case 3:
         result = subtract(x, n);
         printf("%.2lf - %d = %.2lf", x, n, result);
         break;
      case 4:
         result = multiply(x, n);
         printf("%.2lf * %d = %.2lf", x, n, result);
         break;
      case 5:
         result = divide(x, n);
         printf("%.2lf / %d = %.2lf", x, n, result);
         break;
      default:
         printf("Invalid choice");
   }
   return 0;
}
