#include <stdio.h>

void check(int n);

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    check(n);
    return 0;
}

void check(int n)
{
    if (n == 0) {
        printf("0 is even.\n");
    } else if (n % 2 == 0) {
        printf("%d is an even number.\n", n);
    } else {
        printf("%d is an odd number.\n", n);
    }
}
