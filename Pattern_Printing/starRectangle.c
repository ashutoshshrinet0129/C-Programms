#include<stdio.h>

int main(){
  int rows ,columns,i , j;
  printf("Enter Number of Rows :\n");
  scanf("%d",&rows);
  printf("Enter Number of Columns :\n");
  scanf("%d",&columns);
  for ( i = 0; i < rows; i++)
  {
    for ( j = 0; j < columns; j++)
    {
      printf("* ");
    }
    printf("\n");
  }
     return 0;
}