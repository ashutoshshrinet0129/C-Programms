
#include<stdio.h>

int main(){

    struct student{
        int rno;
        float percent;
        char grade;
    };

    struct student raghav;  // declaration

    raghav.grade = 'A';
    raghav.rno = 88;
    raghav.percent = 95.4;

    printf("%c\n", raghav.grade);
    printf("%d\n", raghav.rno);
    printf("%f\n", raghav.percent);

    struct student harsh = {19, 92.3, 'A'};

    printf("%c\n", harsh.grade);
    printf("%d\n", harsh.rno);
    printf("%f\n", harsh.percent);

    return 0;
}

