#include <stdio.h>

int main(void)
{
    char operator_symbol;
    double first_number;
    double second_number;
    double result;

    printf("Enter the expression (example: 5 + 3): ");
    if (scanf("%lf %c %lf", &first_number, &operator_symbol, &second_number) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    switch (operator_symbol) {
        case '+':
            result = first_number + second_number;
            printf("Result = %.2f\n", result);
            break;
        case '-':
            result = first_number - second_number;
            printf("Result = %.2f\n", result);
            break;
        case '*':
            result = first_number * second_number;
            printf("Result = %.2f\n", result);
            break;
        case '/':
            if (second_number == 0.0) {
                printf("Division by zero is not allowed.\n");
                return 1;
            }
            result = first_number / second_number;
            printf("Result = %.2f\n", result);
            break;
        default:
            printf("Invalid operator.\n");
            return 1;
    }

    return 0;
}
