#include <stdio.h>

int main(void)
{
    int a[100], n, i, j, t;

    printf("Enter the number of elements (1-100): ");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Original elements:\n");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    printf("Sorted elements in ascending order:\n");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    return 0;
}
