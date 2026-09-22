#include<stdio.h>

int main(){
int x;
printf("Enter The 1st Number :\n");
scanf("%d",&x);
int y;
printf("Enter The 2nd Number  :\n");
scanf("%d",&y);
int z;
z = x;
x=y;
y=z;
printf("1st Number is  %d and 2nd Number is %d",x,y);


     return 0;
}