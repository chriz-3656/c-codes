#include <stdio.h>

float avg(int a, int b, int c);

int main()
{
    int a, b, c;
    float d;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    d = avg(a, b, c);
    printf("Average = %.2f\n", d);
    return 0;
}

float avg(int a, int b, int c)
{
    return (a + b + c) / 3.0f;
}
