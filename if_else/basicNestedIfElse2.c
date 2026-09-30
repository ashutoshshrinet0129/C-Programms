#include <stdio.h>

int main()
{
    int number;
    printf("Enter Number : \n");
    scanf("%d", &number);
    if (number % 15 != 0)
    {
        if (number % 5 == 0 || number % 3 == 0)
        {
            printf("Number is Divisible by 5/3");
        }
        else
        {
            printf("Number is not Divisible by 5 / 3");
        }
    }
    else
    {
 printf("Number is Divisible by 15, so condition is not satisfied");    }

    return 0;
}