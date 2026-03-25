#include <stdio.h>

void print_even_or_odd(int number);

int main(void)
{
    int number;

    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    print_even_or_odd(number);
    return 0;
}

void print_even_or_odd(int number)
{
    if (number == 0) {
        printf("0 is even.\n");
    } else if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }
}
