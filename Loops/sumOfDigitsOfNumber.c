#include <stdio.h>

int main()
{
    int n, sum, lastDigit;
    printf("Enter Digits : \n");
    scanf("%d", &n);
    sum = 0;
    while (n > 0)
    {
        lastDigit = n % 10;
        sum = sum + lastDigit;
        n = n / 10;
    }
    printf("Sum of Digits : %d", sum);
    return 0;
}