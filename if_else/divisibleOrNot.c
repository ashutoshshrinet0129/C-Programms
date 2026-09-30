#include<stdio.h>

int main(){
    int  num;
printf("Enter Positive Number :\n");
scanf("%d",&num);
if (num % 5 == 0)
{
printf("%d Number is Divisible by 5 ",num);
}
else{
    printf("%d Number is Not Divisible by 5",num);

}
     return 0;
}