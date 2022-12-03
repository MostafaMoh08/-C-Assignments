#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr[5];


    for(int i=0;i<5;i++){

        scanf("%d",&arr[i]);


    }

    for(int j=0;j<9;j++)
	{
		for(int i=0;i<9-j;i++)
		{
			if(arr[i]>arr[i+1])
			{

			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			}
		}

	}


	printf(" the maximum = %d  \n",arr[9]);
	printf(" the minimum = %d    ",arr[0]);

}
