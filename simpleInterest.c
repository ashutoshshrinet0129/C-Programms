#include <stdio.h>

int main() {
    float p = 500;
    float r = 5;
    float t = 1;

    float si = (p * r * t) / 100;

    printf("Simple Interest = %.2f\n", si);

    return 0;
}