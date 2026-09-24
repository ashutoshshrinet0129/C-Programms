#include<stdio.h>
#include <stdbool.h>

int main(){
int i , sizeOfArray, targetValue;
bool flag = false;

printf("Enter Size Of Array:\n");
scanf("%d",&sizeOfArray);
if (sizeOfArray<=0)
{
printf("Enter Size Of Array in Positive Digits :\n");
return 0;
}
int arr[sizeOfArray];
for ( i = 0; i < sizeOfArray; i++)
{
printf("Enter Array %d Element :\n",i+1);
scanf("%d",&arr[i]);
}
printf("Enter Target Value:\n");
scanf("%d",&targetValue);
for ( i = 0; i < sizeOfArray; i++)
{
    if (arr[i]==targetValue)
    {
       printf("Value Found at the index %d\n",i);
       flag = true;
      
    }

    
}

if (!flag)
{
   printf("Value Not Found\n ");
}


     return 0;
}