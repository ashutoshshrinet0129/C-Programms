
#include <stdio.h>

int main() {
    int i, j, side;

    printf("Enter Side of Triangle:\n");
    scanf("%d", &side);

    for (i = 1; i <= side; i++) {
        int increment = 1;

        for (j = 1; j <= i; j++) {
            printf("%d ", increment);
            increment += 2;
        }

        printf("\n");
    }

    return 0;
}

