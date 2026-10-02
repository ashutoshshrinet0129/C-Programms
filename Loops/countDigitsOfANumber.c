#include<stdio.h>

int main(){
int count = 0 , n ;
printf("Enter Digits :\n");
scanf("%d",&n);
while (n != 0)
{
    count++;
    n /= 10;
}
printf("Number of digits: %d\n", count);

     return 0;
}