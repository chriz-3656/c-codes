#include <stdio.h>

unsigned long long factorial(int number);

int main(void)
{
    int number;
    unsigned long long result;

    printf("Enter a non-negative number (0-20): ");
    if (scanf("%d", &number) != 1 || number < 0 || number > 20) {
        printf("Invalid input.\n");
        return 1;
    }

    result = factorial(number);
    printf("Factorial of %d is %llu\n", number, result);

    return 0;
}

unsigned long long factorial(int number)
{
    if (number == 0 || number == 1) {
        return 1;
    }

    return (unsigned long long)number * factorial(number - 1);
}
