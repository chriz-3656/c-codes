#include <stdio.h>

#define MAX_SIZE 10

int main(void)
{
    int a[MAX_SIZE][MAX_SIZE], b[MAX_SIZE][MAX_SIZE], s[MAX_SIZE][MAX_SIZE];
    int r, c, i, j;

    printf("Enter the number of rows and columns (1-10): ");
    scanf("%d %d", &r, &c);
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            s[i][j] = a[i][j] + b[i][j];

    printf("Sum of the matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) printf("%d\t", s[i][j]);
        printf("\n");
    }

    return 0;
}
