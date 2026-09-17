#include <stdio.h>

int main()
{
    int x = 54;
    printf("%d \n", x);
    // post Increment & Decrement
    x++; // post increment
    printf("%d \n", x);
    x--; // post decrement
    printf("%d \n", x);

    // pre Increment & Decrement
    ++x; // pre increment
    printf("%d \n", x);
    --x; // pre decrement
    printf("%d \n", x);

    return 0;
}