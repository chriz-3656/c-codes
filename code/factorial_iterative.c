#include <stdio.h>

unsigned long long find_factorial(int number);

int main(void)
{
    int number;
    unsigned long long result;

    printf("Enter a non-negative number (0-20): ");
    if (scanf("%d", &number) != 1 || number < 0 || number > 20) {
        printf("Invalid input.\n");
        return 1;
    }

    result = find_factorial(number);
    printf("Factorial of %d is %llu\n", number, result);

    return 0;
}

unsigned long long find_factorial(int number)
{
    unsigned long long factorial = 1;
    int i;

    for (i = 1; i <= number; i++) {
        factorial *= (unsigned long long)i;
    }

    return factorial;
}
