#include <stdio.h>

int main(void)
{
    int first_number;
    int second_number;
    int third_number;
    int sum;

    printf("Enter three numbers: ");
    if (scanf("%d %d %d", &first_number, &second_number, &third_number) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    sum = first_number + second_number + third_number;
    printf("Sum of three numbers = %d\n", sum);

    return 0;
}
