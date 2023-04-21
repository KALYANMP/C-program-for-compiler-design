#include <stdio.h>
void decimaltobinary(int decimal);
int main() {
    int decimal;   
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);  
    printf("Binary equivalent: ");
    decimaltobinary(decimal);  
    return 0;
}
void decimaltobinary(int decimal) {
    int binary[32], i = 0;
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}
