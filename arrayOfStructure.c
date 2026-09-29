#include <stdio.h>

int main() {

    typedef struct student {
        int rno;
        float percent;
        char grade;
    } student;

    student arr[3];

    arr[0].grade = 'A';
    arr[0].percent = 93.4;
    arr[0].rno = 9;

    arr[1] = (student){76, 70.7, 'B'};

    return 0;
}