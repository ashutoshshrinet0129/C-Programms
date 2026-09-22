#include <stdio.h>

int min(int x, int y)
{
    if (x < y)
        return x;
    else
        return y;
}

int main()
{
    int a, b, m;

    printf("Enter 1st number: ");
    scanf("%d", &a);

    printf("Enter 2nd number: ");
    scanf("%d", &b);

    m = min(a, b);

    printf("Minimum of %d and %d is %d\n", a, b, m);

    return 0;
}