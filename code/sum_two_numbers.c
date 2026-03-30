#include <stdio.h>

int sum(int a, int b);

int main(void)
{
    int a, b, s;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    s = sum(a, b);
    printf("Sum of %d and %d is %d\n", a, b, s);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
