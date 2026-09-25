
#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[3][3] = {1,2,3,40,5,6,7,8,9};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    int min = INT_MAX; 

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           if (min > arr[i][j])
    min = arr[i][j];
        }
    }

    printf("%d", min);

    return 0;
}

