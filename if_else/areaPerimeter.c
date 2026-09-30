#include<stdio.h>

int main(){
    int area,length,breadth,perimeter;
printf("Enter Breadth of a Rectangle:\n");
scanf("%d",&breadth);
printf("Enter Length of a Rectangle:\n");
scanf("%d",&length);
area = length * breadth;
perimeter = 2*(length + breadth);
if (area > perimeter)
{
printf("Area of Reactangle is Greater than Perimeter \n");
}
else{
    printf("Area of Rectangle is Not Greater than Perimeter \n");

}
     return 0;
}