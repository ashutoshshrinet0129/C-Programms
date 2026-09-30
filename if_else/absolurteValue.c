#include<stdio.h>

int main(){
int num ;
printf("Enter a Number");
scanf("%d",&num);
if (num >= 0)
{
   printf(" Absolute Value = %d",num);
}
else{
num = -num;
printf("Absolute Value = %d",num);
}

     return 0;
}