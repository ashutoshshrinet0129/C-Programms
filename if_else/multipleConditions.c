#include<stdio.h>

int main(){
    int num;
printf("Enter a Number");
scanf("%d",&num);
if (num>99&&num<1000)
{
printf("%d  is Three Digit Number. ",num);
}
else{
    printf("%d  is not Three Digit Number. ",num);

}
     return 0;
}