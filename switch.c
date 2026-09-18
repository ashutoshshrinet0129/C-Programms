#include<stdio.h>

int main(){
    char ch;
    printf("Enter a number: ");
    scanf("%c", &ch);

 int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    int b;
    printf("Enter a number: ");
    scanf("%d", &b);

    switch (ch)
    {
    case '+' :
  printf("%d",a+b); 
         break;
    
            case '-' :
  printf("%d",a-b); 
         break;
    
            case '*' :
  printf("%d",a*b); 
         break;
    
            case '/' :
  printf("%d",a/b); 
         break;
    
    default:
      printf("Invalid Operator"); 

        break;
    }

     return 0;
}  