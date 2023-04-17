#include <stdio.h>
#include <string.h>
struct customer {
    int account_no;
    char name[50];
    float balance;
};
void print_low_balance_customers(struct customer customers[], int num_customers) {
    printf("Customers with balance less than Rs. 100:\n");
    for (int i = 0; i < num_customers; i++) {
        if (customers[i].balance < 100) {
            printf("Account No: %d, Name: %s\n", customers[i].account_no, customers[i].name);
        }
    }
}
int main() {
    struct customer customers[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter details for customer %d:\n", i+1);
        printf("Account No: ");
        scanf("%d", &customers[i].account_no);
        printf("Name: ");
        scanf("%s", customers[i].name);
        printf("Balance: ");
        scanf("%f", &customers[i].balance);
    }
    print_low_balance_customers(customers, 3);
    return 0;
}

