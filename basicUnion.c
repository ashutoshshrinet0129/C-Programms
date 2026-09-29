#include <stdio.h>

int main() {

    union student {
        int rno;
        float percent;
        char grade;
    };

    union student s1;

    s1.rno = 10;
    printf("Roll No: %d\n", s1.rno);

    s1.percent = 85.5;
    printf("Percentage: %.2f\n", s1.percent);

    s1.grade = 'A';
    printf("Grade: %c\n", s1.grade);

    return 0;
}