#include<stdio.h>

int main(){
int reverse , n , lastDigit;
printf("Enter Number :\n");
scanf("%d",&n);
reverse = 0, lastDigit = 0;
while (n>0)
{
lastDigit = n % 10;
reverse = reverse * 10 + lastDigit;
n = n / 10;   
}

printf("Reverse of the number is: %d\n", reverse);
     return 0;
}