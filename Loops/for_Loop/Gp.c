#include<stdio.h>

int main(){
int a =1,i,n;
printf("Enter Number of Term :\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
     printf("%d \n",a);
     a = a * 2;
}
     return 0;
}