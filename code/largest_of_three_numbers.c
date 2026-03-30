#include <stdio.h>

int main(void)
{
    int a, b, c, m;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    printf("Largest number is %d\n", m);
    return 0;
}
