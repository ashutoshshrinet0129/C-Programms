#include<stdio.h>
void swap(int* x, int* y){
    
int temp = *x;
*x=*y;
*y=temp;
}
int main(){
int x;
printf("Enter The 1st Number :\n");
scanf("%d",&x);
int y;
printf("Enter The 2nd Number  :\n");
scanf("%d",&y);
swap(&x,&y);

printf("1st Number is  %d and 2nd Number is %d",x,y);


     return 0;
}