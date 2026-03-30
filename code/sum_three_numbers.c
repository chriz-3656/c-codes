#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Sum of three numbers = %d\n", a + b + c);
    return 0;
}
