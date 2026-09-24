#include<stdio.h>

int main(){
    int sizeOfArray, i,sum = 0;
    printf("Enter Size Of Array :\n");
    scanf("%d",&sizeOfArray);
    if (sizeOfArray<= 0)
    {
       printf("Enter Array Size in Positive Digits:\n");
       return 0;
    }
    
     int arr[sizeOfArray];
     for ( i = 0; i < sizeOfArray; i++)
     {
       printf("Enter Array Elements :\n");
       scanf("%d",&arr[i]);
     }
      for ( i = 0; i < sizeOfArray; i++)
     {
       printf("Array Elements is %d :\t",arr[i]);
     }
for ( i = 0; i < sizeOfArray; i++)
{
   sum +=arr[i];
}
printf("Sum Of all Array Elements is %d",sum);
     return 0;
}