#include<stdio.h>

int main(){
int j;//Because of uninitialized variable j, the output will be unpredictable and may lead to undefined behavior. It is important to initialize variables before using them in conditions or loops.
while (j<10)
{
   printf("\n%d",j);
   j=j+1;
}

     return 0;
}