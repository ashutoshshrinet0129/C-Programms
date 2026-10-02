#include <stdio.h>

int main() {

    int a = 1, b = 1, sum, n, i;

    printf("Enter Nth Term:\n");
    scanf("%d", &n);

    if (n == 1 || n == 2) {
        sum = 1;
    } else {
        for (i = 3; i <= n; i++) {
            sum = a + b;
            a = b;
            b = sum;
        }
    }

    printf("Fibonacci of the number is: %d\n", sum);

    return 0;
}