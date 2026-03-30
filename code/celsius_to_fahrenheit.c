#include <stdio.h>

int main(void)
{
    float c;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    printf("Temperature in Fahrenheit = %.2f\n", (c * 9 / 5) + 32.0);
    return 0;
}
