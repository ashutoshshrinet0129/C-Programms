#include<stdio.h>

int main(){
int number;
printf("Enter Number : \n");
scanf("%d",&number);
if (number % 5 == 0)
{
   if (number % 3 == 0)
   {
    printf("Number is Divisible by 5 and 3");
   }
   else{
        printf("Number is not Divisible by  3");

   }
}
else{
        printf("Number is not  Divisible by 5 ");

}
     return 0;
}