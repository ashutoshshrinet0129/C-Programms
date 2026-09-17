/*   Precedence in C Programming
 () → Parentheses have highest priority.
*, /, % → Multiplication, Division, Modulus.
+, - → Addition, Subtraction.
Higher precedence operators are evaluated first.
Operators with the same precedence are evaluated left to right.
Parentheses can be used to change the order of evaluation.
*/
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    int result = a + b * c;
    printf("Result = %d\n", result);
    return 0;
}
