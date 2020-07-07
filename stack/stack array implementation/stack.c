#include<stdio.h>
//define max size of the array
#define MAX_SIZE  10

//define an array that is global to can access for all function 
int arr[MAX_SIZE];

 // first element of the stack
 int top =-1;

/***************************************************************/
/* Description    :  This function push element in the stack   */
/* Inputs 		  :  data							  		   */
/* return 		  :  void		 					 		   */
/***************************************************************/
void push(int data)
{
	//check if stack isFull
	if(top == MAX_SIZE)
	{
		printf("stack overflow\n");
		return;
	}
	//put data in the stack and incremant top by 1
	arr[++top] = data;//== arr[top] = data; top++
}

/******************************************************************/
/* Description    :  This function pop last element from the stack*/
/* Inputs 		  :  void							  		      */
/* return 		  :  void		 					 		      */
/******************************************************************/
void pop()
{
	//check if stack is empty
	if(top == -1)
	{
		printf("Erro : No Elements to pop\n");
	}
	
	top--;
}

/******************************************************************/
/* Description    :  This function print element from the stack	  */
/* Inputs 		  :  void							  		      */
/* return 		  :  void		 					 		      */
/******************************************************************/
void print(void)
{
	int i=0;
	printf("Stack element = \n");
	for(i=0 ; i<= top ; i++)
	{
		printf("  %d \n\n",arr[i]);
	}

}
 
/******************************************************************/
/* Description    :  This function check if stack is empty or not */
/* Inputs 		  :  data							  		      */
/* return 		  :  void		 					 		      */
/******************************************************************/
void IsEmpty()
{
	if(top == -1)
	{
		printf("stack is empty\n");
		return;
	}
} 
int main(void)
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	print();
	pop();
	pop();
	print();
	
	
	
	return 0;
}