#include<stdio.h>

int main(){
int i , j ,n ;
printf("Enter Side of square :\n");
scanf("%d",&n);
 
for(i=1;i<=n;i++){
    int oddNumber = 1;// Initialize the first odd number  
    for(j=1;j<=n;j++){
      printf("%d ", oddNumber);
      oddNumber += 2; // Move to the next odd number
    }
    printf("\n");
}
     return 0;
}