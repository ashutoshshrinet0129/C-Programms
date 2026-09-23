#include <stdio.h>

void print(int x, int n)
{
    if (x > n)
        return; // Base case

    printf("%d\n", x); // Work
    print(x + 1, n);   // Call
}

int main()
{
    int n;

    printf("Enter n : ");
    scanf("%d", &n);

    print(1, n);

    return 0;
}