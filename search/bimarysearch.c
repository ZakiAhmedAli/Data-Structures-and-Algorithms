// C program to implement Binary Search
#include <stdio.h>


int binarySearch(int arr[], int size, int value)
{
	int low=0,high=size-1;
	while(low <= high)
	{
		int mid = (low+high) / 2;
		if(arr[mid] == value){ return mid; }
		else if(arr[mid] < value){ low = mid+1; }
		else{	high = mid-1; }
		
	}
	return -1;/*value not found*/
	
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
	int result = binarySearch(arr, n - 1, x);
	
	if(result == -1){ printf("Element is not present in array");}
	else printf("Element is present at index %d",result);
	return 0;
}
