#include<stdio.h>

int main(){
int i , sizeOfArray ,mx;
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
mx=arr[0];
for ( i = 1; i < sizeOfArray; i++)
{
   if (mx<arr[i])
   {
    mx= arr[i];
   }
   
}
printf("Largest Value in Array Element is %d",mx);
     return 0;
}