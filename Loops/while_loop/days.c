#include <stdio.h>

int main() {
    int day;
    printf("Enter a number (1-7) to represent a day of the week:\n ");
    scanf("%d", &day);

    while (day <= 7) {
        if (day == 1){
            printf("Monday\n");
            break;
        }
        else if (day == 2){
            printf("Tuesday\n");
            break;
        }
        else if (day == 3){
            printf("Wednesday\n");
            break;
        }
        else if (day == 4){
            printf("Thursday\n");
            break;
        }
        else if (day == 5){
            printf("Friday\n");
            break;
        }
        else if (day == 6){
            printf("Saturday\n");
            break;
        }
        else{
            printf("Sunday\n");
            break;
        }

        day++;
    }

    return 0;
}