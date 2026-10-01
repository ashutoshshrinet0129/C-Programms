#include<stdio.h>

int main(){
int i , n , isPrime;
printf("Enter a number: ");
scanf("%d", &n);
if (n<=1)
{
    isPrime = 0;
}
else{
    
    isPrime = 1;
    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
            isPrime = 0;
            break;
        }
    }
}
if (isPrime){
    printf("%d is a prime number.\n", n);
}
else{
    printf("%d is not a prime number.\n", n);
}
     return 0;
}