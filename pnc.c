#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    int b;

    printf("Enter base: ");
    scanf("%f", &a);

    printf("Enter power: ");
    scanf("%d", &b);

    float p = pow(a, b);

    printf("%.2f raised to the power %d is %.2f\n", a, b, p);

    return 0;
}