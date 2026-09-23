#include <stdio.h>

void greed2(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("How are you?\n");

    greed2(n - 1);
}

void greed()
{
    printf("Good Morning\n");
}

int main()
{
    int n;

    greed();
    greed();

    printf("\n");

    greed2(3);

    return 0;
}