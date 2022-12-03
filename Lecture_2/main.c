#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1;
   int num2;
   int num3;

   printf("enter number 1: ");

   scanf("%d",&num1);

   printf("enter number 2: ");

   scanf("%d",&num2);

   printf("enter number 3: ");

   scanf("%d",&num3);


   if(num1>num2&&num1>num3){

    printf("maximum number is %d",num1);


   }

   else if(num2>num1&&num2>num3){

     printf("maximum number is %d",num2);

   }

   else{

     printf("maximum number is %d",num3);

   }











}
