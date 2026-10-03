#include<stdio.h>

int main(){
int i , j ,  side;
printf("Enter Side of Trangle :\n") ;
scanf("%d",&side);
for (i = 1; i <= side; i++)
{
  int   increment =1;
  for(j=1;j<=i;j++){
    printf("%d ", j);
increment += 2; // Move to the next odd number
  }
  printf("\n");
}

     return 0;
}