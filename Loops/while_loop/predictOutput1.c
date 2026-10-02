#include<stdio.h>

int main(){
int i = 1;
while (i<=10);//Stuck in infinite loop because of semicolon at the end of while loop
{
   printf("\n%d",i);
   i++;
}

}