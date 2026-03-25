#include <stdio.h>

int is_prime(int number);

int main(void)
{
    int number;

    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (is_prime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

int is_prime(int number)
{
    int divisor;

    if (number <= 1) {
        return 0;
    }

    for (divisor = 2; divisor * divisor <= number; divisor++) {
        if (number % divisor == 0) {
            return 0;
        }
    }

    return 1;
}
