#include<stdio.h>

int main(){
int cp,sp;
 printf("Enter Cost Price :\n");
 scanf("%d",&cp);
  printf("Enter Selling Price :\n");
 scanf("%d",&sp);
 if(sp>cp){
    printf("Profit");
 }
 else if (sp<cp)
 {
   printf("Loss");
 }
 else{
       printf("No Profit No Loss");

 }
 
     return 0;
}