#include<stdio.h>

int main(){
    int costAmount , sellAmount;
printf("Enter Cost Amount : \n");
scanf("%d",&costAmount);
printf("Enter Selling Amount:\n");
scanf("%d",&sellAmount);
if (sellAmount>costAmount)
{
   printf("Profit ");
   }
   else if (sellAmount == costAmount)
   {
    printf("No Profit No Loss ");
   }
   

else{
 printf("Loss ");
}

     return 0;
}