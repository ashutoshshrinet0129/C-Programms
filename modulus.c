#include <stdio.h>
int main() {
    int a, b, remainder;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    remainder = a % b;
    printf("Remainder = %d\n", remainder);
    return 0;
}
/*% gives the remainder.
% is mainly used with integers.
The divisor cannot be zero.
If the first number is smaller, the remainder is the first number.
Exact division gives a remainder of 0.
% 2 is used to check even/odd.
% can check divisibility.
/ gives the quotient, while % gives the remainder.*/