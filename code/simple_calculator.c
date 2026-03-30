#include <stdio.h>

int main(void)
{
    char op;
    float a, b, r;

    printf("Enter the expression (example: 5 + 3): ");
    scanf("%f %c %f", &a, &op, &b);
    switch (op) {
        case '+':
            r = a + b;
            printf("Result = %.2f\n", r);
            break;
        case '-':
            r = a - b;
            printf("Result = %.2f\n", r);
            break;
        case '*':
            r = a * b;
            printf("Result = %.2f\n", r);
            break;
        case '/':
            if (b == 0.0) {
                printf("Division by zero is not allowed.\n");
                return 1;
            }
            r = a / b;
            printf("Result = %.2f\n", r);
            break;
        default:
            printf("Invalid operator.\n");
            return 1;
    }

    return 0;
}
