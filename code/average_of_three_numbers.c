#include <stdio.h>

double calculate_average(int first_number, int second_number, int third_number);

int main(void)
{
    int first_number;
    int second_number;
    int third_number;
    double average;

    printf("Enter three numbers: ");
    if (scanf("%d %d %d", &first_number, &second_number, &third_number) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    average = calculate_average(first_number, second_number, third_number);
    printf("Average = %.2f\n", average);

    return 0;
}

double calculate_average(int first_number, int second_number, int third_number)
{
    return (first_number + second_number + third_number) / 3.0;
}
