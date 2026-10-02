#include<stdio.h>

int main(){
int sum , lastDigit , n ;
printf("Enter Digits ");
scanf("%d",&n);
sum = 0,lastDigit=0;
while (n>0)
{
    lastDigit = n%10;
   if (lastDigit % 2 == 0 )
   {
    sum = sum + lastDigit;
   }
   n = n/10;
}
printf("Sum of Even Digits is %d",sum);
     return 0;
}