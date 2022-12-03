#include <stdio.h>
#include <stdlib.h>


class1_sorting(int *ptr_1){

  for (int i=0;i<9;i++)
	{
		for(int j=0;j<9-i;j++)
		{
			if(*ptr_1[j]>*ptr_1[j+1])
			{
				temp=*ptr_1[j];
				*ptr_1[j]=*ptr_1[j+1];
				*ptr_1[j+1]=temp;
			}
		}
	}
}


class2_sorting(int *ptr_2){

  for (int i=0;i<9;i++)
	{
		for(int j=0;j<9-i;j++)
		{
			if(*ptr_2[j]>*ptr_2[j+1])
			{
				temp=*ptr_2[j];
				*ptr_2[j]=*ptr_2[j+1];
				*ptr_2[j+1]=temp;
			}
		}
	}
}


class3_sorting(int *ptr_3){

  for (int i=0;i<9;i++)
	{
		for(int j=0;j<9-i;j++)
		{
			if(*ptr_3[j]>*ptr_3[j+1])
			{
				temp=*ptr_3[j];
				*ptr_3[j]=*ptr_3[j+1];
				*ptr_3[j+1]=temp;
			}
		}
	}
}









int main()
{

   int class_1[10]={50,60,30,40,70,20,55,77,90,95};
   int class_2[10]={75,65,35,50,70,45,80,90,96,85};
   int class_3[10]={10,50,30,80,70,20,75,77,90,95};
   int Num_pass_1=0;
   int Num_pass_2=0;
   int Num_pass_3=0;

   int Num_fail_1=0;
   int Num_fail_2=0;
   int Num_fail_3=0;

   int Num_fail;
   int high_grade;
   int Low_grade;
   int AVerage_grade;
   int temp;
   int lowest;
   int highest;
   int average_1;
   int average_2;
   int average_3;


   int *ptr_1=class_1;
   int *ptr_2=class_2;
   int *ptr_3=class_3;

   class1_sorting(ptr_1);
   class2_sorting(ptr_2);
   class3_sorting(ptr_3);




	for(int x=0;x<10;x++)
	{
		if(class_1[x]>=50)
		{
			Num_pass_1=+1;
		}

		else
		{
			Num_fail_1=+1;
		}
	}




	for(int y=0;y<10;y++)
	{
		if(class_2[x]>=50)
		{
			Num_pass_2=+1;
		}

		else
		{
			Num_fail_2=+1;
		}
	}


	for(int z=0;z<10;z++)
	{
		if(class_2[x]>=50)
		{
			Num_pass_3=+1;
		}

		else
		{
			Num_fail_3=+1;
		}
	}



	if(class_1[0]<class_2[0] && class_1[0]<class_3[0])
	{
		lowest=class_1[0];
	}

	else if (class_2[0]<class_1[0] && class_2[0]<class_3[0])
	{
		lowest=class_2[0];
	}

	else {
        lowest=class_3[0];
	}



	if(class_1[9]>class_2[9] && class_1[9]>class_3[9])
	{
		highest=class_1[9];
	}

	else if (class_2[9]>class_1[9] && class_2[9]>class_3[9])
	{
		highest=class_2[9];
	}

	else {
		highest=class_3[9];
	     }



    for(int i=0;i<10;i++)
	{
		sum_1=sum_1+class_1[i];
		sum_2=sum_2+class_2[i];
		sum_3=sum_3+class_3[i];
	}

	average_1=sum_1/10;
	average_2=sum_2/10;
	average_3=sum_3/10;



    printf("number of passed students = %d\n",Num_pass_1+Num_pass_2+Num_pass_3);
	printf("number of failed students = %d\n",Num_fail_1+Num_fail_2+Num_fail_3);
	printf("Highest grade = %d\n",highest);
	printf("lowest grade = %d\n",lowest);
	printf("Average grade of class 1 = %d\n",average_1);
	printf("Average grade of class 2 = %d\n",average_2);
	printf("Average grade of class 3 = %d\n",average_3);




}
