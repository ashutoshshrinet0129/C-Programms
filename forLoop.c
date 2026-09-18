#include<stdio.h>

int main(){
int i,n,sum = 0;
printf("Enter Number to print From - 01 : \n");
scanf("%d",&n);
for ( i = 1; i <= n; i++)
{
if (i % 2 != 0)
{
 sum = sum + i ;
}
else{
    continue;
}

}
printf(" Sum of all Odd number from 01-n is%d \n",sum);
     return 0;
}