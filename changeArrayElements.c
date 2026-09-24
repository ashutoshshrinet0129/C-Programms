#include<stdio.h>
int main(){
int i , sizeOfArray;
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
for ( i = 0; i < sizeOfArray; i++)
{
   if (i % 2 ==0)
   {
   arr[i]+=10;
   }
   else{
arr[i]*=2;
   }
}
for ( i = 0; i < sizeOfArray; i++)
{
printf("Array Elements is %d:\n",arr[i]);
}
     return 0;
}