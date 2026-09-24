#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[] = {17, 12, 31, 4, 5, 6, 7};

    int n = sizeof(arr) / sizeof(arr[0]);

    // Display array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    // Finding maximum
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    printf("%d is the largest\n", max);

    // Finding second largest
    int smax = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != max && smax < arr[i])
        {
            smax = arr[i];
        }
    }

    printf("%d is the second largest\n", smax);

    return 0;
}