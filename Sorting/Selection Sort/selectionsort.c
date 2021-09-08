// Selection sort in C

#include <stdio.h>

#define  SIZE 10

void SelectioSort(int *array , int length)
{
	int i , j,min,temp;
	
	for(i=0; i<length-1; i++)
	{
		min=i;
		for(j=i+1; j<length; j++)
		{
			if(array[min] > array[j])
				min=j;//update the index of min elements
		}
		temp = array[i];
		array[i] = array[min];
		array[min] =temp;
	}
}
int main()
{
	int array[SIZE]={45,20,60,80,10,5,8,7,9,90};
	SelectioSort(array , SIZE);
	int count;
	
	for(count =0 ; count<SIZE ; count++)
	{
		printf("%d\n",array[count]);
	}
	
	return 0;
	
}