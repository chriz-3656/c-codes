#include <stdio.h>

int main(void)
{
    double length;
    double breadth;
    double area;
    double perimeter;

    printf("Enter the length and breadth of the rectangle: ");
    if (scanf("%lf %lf", &length, &breadth) != 2 || length <= 0 || breadth <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    area = length * breadth;
    perimeter = 2.0 * (length + breadth);

    printf("Area of rectangle = %.2f\n", area);
    printf("Perimeter of rectangle = %.2f\n", perimeter);

    return 0;
}
