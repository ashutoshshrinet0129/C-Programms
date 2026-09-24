#include <stdio.h>

int main()
{
    int i, n, arr[20];
    printf("Enter Number Of Element:\n");
    scanf("%d", &n);
    if (n <= 0 || n > 20)
    {
        printf("Maximum 20 elements are allowed.\n");
        return 0;
    }
    for (i = 0; i < n; i++)
    {

        printf("Enter %d Array Elements: \n", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("Array Elements are : %d\n", arr[i]);
    }

    return 0;
}