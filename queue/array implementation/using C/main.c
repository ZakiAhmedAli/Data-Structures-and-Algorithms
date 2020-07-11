#include<stdio.h>
#define MAX 10

int Queue[MAX];

char rear  =-1;
char front =-1;


/**************************************************************************/
/* Description    :  This function insert element in the front of queue   */
/* Inputs 		  :  void							  		   			  */
/* return 		  :  front of Queue		 		    		   			  */
/**************************************************************************/

void Enqueue(char data);

/**************************************************************************/
/* Description    :  This function return element in the front of queue   */
/* Inputs 		  :  data							  		   			  */
/* return 		  :  void		 					 		   			  */
/**************************************************************************/
char Dequeue(void);

/**************************************************************************/
/* Description    :  This function check if queue is empty or not   	  */
/* Inputs 		  :  void							  		   			  */
/* return 		  :  char		 					 		   			  */
/**************************************************************************/
char IsEmpty(void);

/********************************************************************/
/* Description    :  This function check if queue is full or not	*/
/* Inputs 		  :  void							  		   	    */
/* return 		  :  char		 					 		   	    */
/********************************************************************/
char IsFull(void);

/************************************************************************/
/* Description    :  This function  Gets the element at the front of the*/
/*					 queue without removing it.							*/
/* Inputs 		  :  void							  		   	    	*/
/* return 		  :  char		 					 		   	    	*/
/************************************************************************/
char Peak(void);

/********************************************************************/
/* Description    :  This function to print item of queue			*/
/* Inputs 		  :  void							  		   	    */
/* return 		  :  char		 					 		   	    */
/********************************************************************/
void display(void);


int main(void)
{
	
	Enqueue(1);
	Enqueue(2);
	Enqueue(3);
	Enqueue(3);

	display();
	
	Dequeue();
	
	display();

	
	return 0;
}//end main

/*
	Step 1 − Check if the queue is full.

	Step 2 − If the queue is full, produce overflow error and exit.

	Step 3 − If the queue is not full, increment rear pointer to point the next empty space.

	Step 4 − Add data element to the queue location, where the rear is pointing.
*/
void Enqueue(char data)
{
	if(IsFull())
	{
		printf("error: Queue is full\n");
		return;
	}
	else if(IsEmpty())
	{
		front = rear =0;
	}
	else
	{
	  rear = (rear+1) % MAX; //==rear++;

	}
	
	Queue[rear] = data;
}

/*
	Step 1 − Check if the queue is empty.

	Step 2 − If the queue is empty, produce underflow error and exit.

	Step 3 − If the queue is not empty, access the data where front is pointing.

	Step 4 − Increment front pointer to point to the next available data element.
*/
char Dequeue(void)
{
	if(IsEmpty())
	{
		printf("Queue is Empty no element to dequeue\n");
		return;
	}

	return Queue[++front];
}


char IsEmpty(void)
{
	if(front == -1 && rear ==-1)
		return 1;
	
	else 
		return 0;
}

char IsFull(void)
{
	if(rear == MAX-1)
		return 1;
	
	else
		return 0;
	
}

char Peak(void)
{
	if(IsEmpty())
	{
		printf("Queue is underflow ");
		return;
	}
	char temp = Queue[front];
	return temp;
}

void display(void)
{
	int i;
	printf("element in Queue : \n");
	for(i=front ; i <= rear ; i++)
		printf("%d\n" ,Queue[i]);
}
