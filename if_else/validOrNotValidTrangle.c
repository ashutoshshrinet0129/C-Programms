#include<stdio.h>

int main(){
    int  side1,side2,side3;
printf("Enter First Side of Trangle :\n");
scanf("%d",&side1);
printf("Enter Second Side of Trangle :\n");
scanf("%d",&side2);
printf("Enter Third Side of Trangle :\n");
scanf("%d",&side3);
if ((side1 + side2)> side3 && (side2 + side3) > side1 && (side3 + side1) > side2)
{
printf("Trangle is Valid ");
}
else{
    printf("Trangle Invalid ");

}

     return 0;
}