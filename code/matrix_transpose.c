#include <stdio.h>

#define MAX_SIZE 10

int main(void)
{
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows;
    int columns;
    int i;
    int j;

    printf("Enter the number of rows and columns (1-10): ");
    if (scanf("%d %d", &rows, &columns) != 2 ||
        rows < 1 || rows > MAX_SIZE ||
        columns < 1 || columns > MAX_SIZE) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    printf("Original matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of the matrix:\n");
    for (i = 0; i < columns; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d\t", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}
