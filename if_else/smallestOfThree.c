#include<stdio.h>

int main(){
int person1,person2,person3;
printf("Enter First Person Age :\n ");
scanf("%d",&person1);
printf("Enter Second Person Age :\n ");
scanf("%d",&person2);
printf("Enter Third Person Age :\n ");
scanf("%d",&person3);
if (person1 < person2 && person1 < person3 )
{
   printf(" First Person is Younger among them");
}
else if (person2 < person1 && person2 < person3)
{
   printf(" Second Person is Younger among them");
}
else{
       printf(" Third Person is Younger among them");

}
     return 0;
}