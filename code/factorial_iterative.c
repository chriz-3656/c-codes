#include <stdio.h>

unsigned long long fact(int n);

int main(void)
{
    int n;
    unsigned long long f;

    printf("Enter a non-negative number (0-20): ");
    scanf("%d", &n);
    f = fact(n);
    printf("Factorial of %d is %llu\n", n, f);
    return 0;
}

unsigned long long fact(int n)
{
    unsigned long long f = 1;
    int i;

    for (i = 1; i <= n; i++) f *= i;
    return f;
}
