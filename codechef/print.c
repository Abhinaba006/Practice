#include <stdio.h>

long catalan(long c)
{
    long n = 1, r = 1, cat, i, j;

    for (i = 2 * c; i > c; i--)
        n = n * i;

    for (j = c + 1; j > 1; j--)
        r = r * j;

    cat = n / r;
    return cat;
}

int main()
{
    long n;
    printf("Enter the number of catalan:\t");
    scanf("%d", &n);
    printf("Catalan number:\t%d", catalan(n));
    return 0;
}