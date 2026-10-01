#include<stdio.h>

int main(){
int i ,a=4,n;
printf("Enter Number of Term :\n");
scanf("%d",&n);
for ( i = 1; i <= n; i++)
{
printf("%d \n",a);
a = a + 4;
}

     return 0;
}