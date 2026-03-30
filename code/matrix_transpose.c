#include <stdio.h>

#define MAX_SIZE 10

int main(void)
{
    int a[MAX_SIZE][MAX_SIZE], r, c, i, j;

    printf("Enter the number of rows and columns (1-10): ");
    scanf("%d %d", &r, &c);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Original matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) printf("%d\t", a[i][j]);
        printf("\n");
    }

    printf("Transpose of the matrix:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) printf("%d\t", a[j][i]);
        printf("\n");
    }

    return 0;
}
