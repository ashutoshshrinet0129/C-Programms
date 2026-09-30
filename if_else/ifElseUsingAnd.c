#include<stdio.h>

int main(){
    int  num;
printf("Enter Positive Number :\n");
scanf("%d",&num);
if (num % 5 == 0 && num % 3 == 0)
{
printf("%d Number is Divisible by 5 and 3 ",num);
}
else{
    printf("%d Number is Not Divisible by 5 and 3",num);

}
     return 0;
}