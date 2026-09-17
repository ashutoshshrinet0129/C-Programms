#include<stdio.h>

int main(){
    int x;
 printf("Enter a number: ");
    scanf("%d", &x);
    if (x>=100 && x<=999)
    {
        printf("It Is Three Digit Number");
    }
    else{
                printf("It Is Not Three Digit Number");

    }
     return 0;
}