

#include <stdio.h>

#define size 8

void InsertionSort(int *array , int length)
{
	int counter1 , counter2,key;
	
	for(counter1=1; counter1< length; counter1++)
	{
		key = array[counter1];
		counter2 = counter1-1;
		while( (counter2>=0) && (key < array[counter2]) )
		{
			array[counter2+1] = array[counter2];
			counter2 = counter2-1;
		}
		
		array[counter2+1] = key;
		
	}
}

void PrintArray(int *array , int length)
{
	int counter=0;
	for(counter = 0 ; counter<length; counter++)
	{
		printf("%d\n",array[counter]);
	}
}
void main(void)
{

	int array[size]={0};

	int i=0;
	
	/*taken values from the user */
	for(i = 0 ; i<size; i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d",&array[i]);
	}
	
	InsertionSort(array ,size);
	PrintArray(array , size);


}

