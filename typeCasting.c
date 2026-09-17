#include <stdio.h>
int main() {
    int x, y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    float result = (float)x / y;
    printf("Result = %.2f\n", result);
    return 0;
}