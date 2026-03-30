#include <stdio.h>

int main(void)
{
    float l, b;

    printf("Enter the length and breadth of the rectangle: ");
    scanf("%f %f", &l, &b);
    printf("Area of rectangle = %.2f\n", l * b);
    printf("Perimeter of rectangle = %.2f\n", 2 * (l + b));
    return 0;
}
