#include <stdio.h>

int main(void)
{
    int numbers[100];
    int count;
    int i;
    int j;
    int temp;

    printf("Enter the number of elements (1-100): ");
    if (scanf("%d", &count) != 1 || count < 1 || count > 100) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    printf("Enter the array elements:\n");
    for (i = 0; i < count; i++) {
        if (scanf("%d", &numbers[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    printf("Original elements:\n");
    for (i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    for (i = 0; i < count - 1; i++) {
        for (j = 0; j < count - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("Sorted elements in ascending order:\n");
    for (i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
