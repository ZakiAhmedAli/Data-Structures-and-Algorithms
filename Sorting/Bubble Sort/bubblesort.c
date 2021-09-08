/*
 1. Bubble Sort
 Bubble sort may be defined as the sorting algorithm that follows the approach of replacing the value in the first index with the smallest value in the array and keep it repeating until the list is sorted.
 It is a very simple way of performing sorting. In this way to sort the array, the value has to be assigned to the array in the beginning before starting the sorting.
 Below is the program to sort the array using bubble sort where the values have been taken from the user. Once the program is compiled and run, it will ask the user for the number of elements that they want to sort. Once the number is provided, the program will ask the user to provide values equivalent to the count that they have provided. The values will be stored in the array and will be processed further using nested for loop together with decision making using “if” in order to sort the array.
 The first smallest value found in the array has been moved to the first index of the array and then the search begins again to find the other smallest number. Once the next smallest number is found, it replaces the value in the second index and the process keeps on repeating until the array consists of a sorted list of values. 
 */

#include <stdio.h>

#define size 8

void main(void)
{

	int array[size]={0};
	int temp=0,counter1=0,counter2=0;
	
	/*taken values from the user*/
	for(counter1 = 0 ; counter1<size; counter1++)
	{
		printf("Enter element %d : ",counter1+1);
		scanf("%d",&array[counter1]);
	}
	
	for(counter1 =0 ; counter1< size-1 ; counter1++)
	{
		for(counter2 =0 ; counter2< size-counter1-1 ; counter2++)
		{
				/*compare and swap*/
			if(array[counter2]>array[counter2+1])
			{
				temp = array[counter2];
				array[counter2] = array[counter2+1];
				array[counter2+1] = temp;
			}
		}
	}
	
	printf("\narray after sorting : \n");
	for(counter1 = 0 ; counter1<size; counter1++)
	{
		printf("%d\n",array[counter1]);
	}


}

