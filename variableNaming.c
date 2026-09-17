#include <stdio.h>

int main() {
    int age = 25;
    int marks = 85;
    float salary = 25000.50;
    char grade = 'A';

    printf("Age = %d\n", age);
    printf("Marks = %d\n", marks);
    printf("Salary = %.2f\n", salary);
    printf("Grade = %c\n", grade);

    return 0;
}
/*Must start with a letter or underscore _.
Can contain letters, digits, and underscores.
Cannot start with a digit.
Cannot contain spaces.
Cannot contain special characters.
Cannot use C keywords.
Variable names are case-sensitive.
Must be unique within the same scope.
Can be of any reasonable length.
Use meaningful names for better readability.*/