#include <stdio.h>
#include <stdlib.h>

int main()
{
   int id;
   int op;
   int result;
   int num1;
   int num2;
   int num3;

   printf("please enter operation id: ");

   scanf("%d",&id);

   printf("enter [1] for 1 operand and [2] for 2operand: ");
   scanf("%d",&op);

   if(op==1){

    printf("enter the number : ");
    scanf("%d",&num1);
    switch(id){

    case 7:

        result=!num1;
        break;

    case 10:
        result=++num1;
        break;

    case 11:
        result=--num1;

    }

    printf("the result= %d",result);

   }


   else{

    printf("enter the number1 : ");
    scanf("%d",&num2);

    printf("enter the number2 : ");
    scanf("%d",&num3);

     switch(id){

    case 1:

        result=num2+num3;
        break;

    case 2:
        result=num2-num3;
        break;

    case 3:
        result=num2*num3;
        break;

    case 4:
        result=num2/num3;
        break;

    case 5:
        result=num2&num3;
        break;

    case 6:
        result=num2|num3;
        break;

    case 8:
        result=num2^num3;
        break;


    }


    printf("the result= %d",result);

   }



}
