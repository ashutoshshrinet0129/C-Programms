#include<stdio.h>

int main(){
    int  num1,num2,num3,num4;
printf("Enter Positive Number 1 :\n");
scanf("%d",&num1);
printf("Enter Positive Number 2 :\n");
scanf("%d",&num2);
printf("Enter Positive Number 3 :\n");
scanf("%d",&num3);
printf("Enter Positive Number 4 :\n");
scanf("%d",&num4);
if (num1 > num2 && num1 > num3 && num1 > num4 )
{
  
 printf("Number 1 is Largest of them"); 
 
}

else if (num2 > num1 && num2 > num3 && num2 > num4)
{
    printf("Number 2 is Largest of them");
}
else if (num3 > num1 && num3 > num2 && num3 > num4)
{
    printf("Number 3 is Largest of them");
}
else{
     printf("Number 4 is Largest of them");
}

     return 0;
}