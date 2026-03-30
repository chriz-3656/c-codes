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
    if (n == 0 || n == 1) {
        return 1;
    }
    return (unsigned long long)n * fact(n - 1);
}
