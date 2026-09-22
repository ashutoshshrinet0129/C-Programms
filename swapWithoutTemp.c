#include <stdio.h>

int main()
{
    int x; // 4
    scanf("%d", &x);

    int y; // 9
    scanf("%d", &y);

    printf("%d %d\n", x, y); // 4 9
    x = x + y;
    y = x - y;
    x = x - y;

    printf("%d %d\n", x, y);

    return 0;
}