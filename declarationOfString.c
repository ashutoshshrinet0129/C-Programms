#include <stdio.h>

int main()
{
    char arr[] = "Ashutosh is Learning C Programming";

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        printf("%c", arr[i]);
    }

    printf("\n");

    return 0;
}