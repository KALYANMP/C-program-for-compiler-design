#include <stdio.h>

int sum(int);

int main()
{
    int number;

    printf("Enter a positive integer :");
    scanf("%d", &number);

    printf("The sum of first %d numbers is %d.", number, sum(number));

    return 0;
}

int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}
	  
