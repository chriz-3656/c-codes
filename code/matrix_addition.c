#include <stdio.h>

#define MAX_SIZE 10

int main(void)
{
    int first_matrix[MAX_SIZE][MAX_SIZE];
    int second_matrix[MAX_SIZE][MAX_SIZE];
    int sum_matrix[MAX_SIZE][MAX_SIZE];
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

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            if (scanf("%d", &first_matrix[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            if (scanf("%d", &second_matrix[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            sum_matrix[i][j] = first_matrix[i][j] + second_matrix[i][j];
        }
    }

    printf("Sum of the matrices:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d\t", sum_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
