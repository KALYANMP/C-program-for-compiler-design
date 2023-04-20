#include <stdio.h>

struct complex {
    float real;
    float imag;
};

struct complex add(struct complex n1, struct complex n2);
struct complex sub(struct complex n1, struct complex n2);
struct complex mul(struct complex n1, struct complex n2);
struct complex div(struct complex n1, struct complex n2);

int main() {
    struct complex num1, num2, result;
    int choice;

    printf("Enter the first complex number:\n");
    printf("Real part: ");
    scanf("%f", &num1.real);
    printf("Imaginary part: ");
    scanf("%f", &num1.imag);

    printf("\nEnter the second complex number:\n");
    printf("Real part: ");
    scanf("%f", &num2.real);
    printf("Imaginary part: ");
    scanf("%f", &num2.imag);

    printf("\nSelect operation to perform:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = add(num1, num2);
            printf("Result: %.2f + %.2fi\n", result.real, result.imag);
            break;
        case 2:
            result = sub(num1, num2);
            printf("Result: %.2f + %.2fi\n", result.real, result.imag);
            break;
        case 3:
            result = mul(num1, num2);
            printf("Result: %.2f + %.2fi\n", result.real, result.imag);
            break;
        case 4:
            result = div(num1, num2);
            printf("Result: %.2f + %.2fi\n", result.real, result.imag);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

struct complex add(struct complex n1, struct complex n2) {
    struct complex res;
    res.real = n1.real + n2.real;
    res.imag = n1.imag + n2.imag;
    return res;
}

struct complex sub(struct complex n1, struct complex n2) {
    struct complex res;
    res.real = n1.real - n2.real;
    res.imag = n1.imag - n2.imag;
    return res;
}

struct complex mul(struct complex n1, struct complex n2) {
    struct complex res;
    res.real = n1.real * n2.real - n1.imag * n2.imag;
    res.imag = n1.real * n2.imag + n1.imag * n2.real;
    return res;
}

struct complex div(struct complex n1, struct complex n2) {
    struct complex res;
    float den = n2.real * n2.real + n2.imag * n2.imag;
    res.real = (n1.real * n2.real + n1.imag * n2.imag) / den;
    res.imag = (n1.imag * n2.real - n1.real * n2.imag) / den;
    return res;
}

