#include<stdio.h>

int main(){
int n ;
printf("Enter A Number For Factorial:\n");
scanf("%d",&n);
int  fact = 1;
while (n>0)
{
   
    fact = fact * n;
    n--;
}
   
    printf("Factorial of the number is: %d\n", fact);


     return 0;
}