#include <stdio.h>

int find_sum(int first_number, int second_number);

int main(void)
{
    int first_number;
    int second_number;
    int sum;

    printf("Enter the first number: ");
    if (scanf("%d", &first_number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf("%d", &second_number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    sum = find_sum(first_number, second_number);
    printf("Sum of %d and %d is %d\n", first_number, second_number, sum);

    return 0;
}

int find_sum(int first_number, int second_number)
{
    return first_number + second_number;
}
