/*Queue - Linked List implementation*/

#include<stdio.h>
#include<stdlib.h>



typedef struct Queue
{
	int data;
	struct Queue* next; 

}Queue;

// Two glboal variables to store address of front and rear nodes. 
 Queue* front = NULL;
 Queue* rear = NULL;

// To Enqueue an integer
void Enqueue(int item)
{
	Queue* temp = (Queue*)malloc(sizeof(Queue));
	
	 temp->data = item;
	 temp->next =NULL;
	 
	 if(front == NULL && rear ==NULL)
	 {
		 front = rear = temp;
		 return;
	 }
	 rear->next = temp;
	 rear = temp;
}
void Dequeue(void)
{
	Queue* temp = front;
	
	if(front == NULL)
	{
		printf("Error Queue is empty\n");
		return;
	}
	if(front == rear)
		front = rear = NULL;
	
	else
		front = front->next;
	
	free(temp);
}

int Front(void)
{
	if(front==NULL)
	{
		printf("Error Queue is empty\n");
		return;
	}
	return front->data;
}

void print(void)
{
	Queue* temp = front;
	
	printf("Elements in Queue = ");
	while(temp !=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n\n");
} 


int main()
{
	Enqueue(5);
	Enqueue(10);
	print();
	Dequeue();
	print();
	return 0;
}