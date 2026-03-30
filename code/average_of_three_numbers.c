#include <stdio.h>

double avg(int a, int b, int c);

int main(void)
{
    int a, b, c;
    double d;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    d = avg(a, b, c);
    printf("Average = %.2f\n", d);
    return 0;
}

double avg(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}
