#include <stdio.h>

int main(void)
{
    int mark;

    printf("Enter the mark (0-100): ");
    if (scanf("%d", &mark) != 1 || mark < 0 || mark > 100) {
        printf("Invalid mark.\n");
        return 1;
    }

    if (mark >= 90) {
        printf("Grade is A\n");
    } else if (mark >= 80) {
        printf("Grade is B\n");
    } else if (mark >= 70) {
        printf("Grade is C\n");
    } else if (mark >= 60) {
        printf("Grade is D\n");
    } else if (mark >= 50) {
        printf("Grade is E\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}
