#include <stdio.h>

int main(void)
{
    int first_number;
    int second_number;
    int third_number;
    int largest;

    printf("Enter three numbers: ");
    if (scanf("%d %d %d", &first_number, &second_number, &third_number) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    largest = first_number;
    if (second_number > largest) {
        largest = second_number;
    }
    if (third_number > largest) {
        largest = third_number;
    }

    printf("Largest number is %d\n", largest);
    return 0;
}
