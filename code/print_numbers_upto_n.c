#include <stdio.h>

int main(void)
{
    int limit;
    int count;

    printf("Enter the limit: ");
    if (scanf("%d", &limit) != 1 || limit < 1) {
        printf("Invalid input.\n");
        return 1;
    }

    for (count = 1; count <= limit; count++) {
        printf("%d\n", count);
    }

    return 0;
}
