#include <stdio.h>
int main() {
    // Declare variables of different data types
    int age;
    float marks;
    char grade;
    // Take age as integer input
    printf("Enter your age: ");
    scanf("%d", &age);
    // Take marks as floating-point input
    printf("Enter your marks: ");
    scanf("%f", &marks);
    // Take grade as character input
    printf("Enter your grade: ");
    scanf(" %c", &grade);
    // Display the entered values
    printf("\nAge = %d\n", age);
    printf("Marks = %.2f\n", marks);
    printf("Grade = %c\n", grade);
    return 0;
}