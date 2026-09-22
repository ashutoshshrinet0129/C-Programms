#include<stdio.h>

void japan(){
    printf("You are in japan\n");
    
}

void england(){
    printf("You are in England\n");
    japan();
}

void india(){
    printf("You are in India\n");
    england();
}
int main(){
     printf("You are in Main ");
     india();
      return 0;
}