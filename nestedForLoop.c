#include<stdio.h>

int main(){
int i , j ,r,c;
printf("Enter Number Of Rows :\n");
scanf("%d",&r);
printf("Enter Number Of Columns:\n");
scanf("%d",&c);
for ( i = 1; i <= r; i++)
{
   for ( j = 1; j <= c; j++)
   {
printf("*");
   }
   printf("\n");

}

     return 0;
}