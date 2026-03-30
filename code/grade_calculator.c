#include <stdio.h>

int main(void)
{
    int m;

    printf("Enter the mark (0-100): ");
    scanf("%d", &m);
    if (m >= 90) {
        printf("Grade is A\n");
    } else if (m >= 80) {
        printf("Grade is B\n");
    } else if (m >= 70) {
        printf("Grade is C\n");
    } else if (m >= 60) {
        printf("Grade is D\n");
    } else if (m >= 50) {
        printf("Grade is E\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}
