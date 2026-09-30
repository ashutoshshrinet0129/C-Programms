#include<stdio.h>

int main(){
    int  year;
printf("Enter Year (Example - 2000 ,2010,2015 e.t.c) :\n");
scanf("%d",&year);
if (year% 400 == 0 || year % 4 == 0 && year % 100 != 0 )
{
printf("%d Leap year",year);
}
else{
    printf("%d Not a Leap year",year);

}
     return 0;
}