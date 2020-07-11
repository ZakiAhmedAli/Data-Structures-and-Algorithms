#include<stdio.h>
#include<stdlib.h>


//deleare linked list node
typedef struct Node
{
	int data;
	struct Node *Next;
}Node; 

Node* Top=NULL;

/******************************************************************/
/* Description    :  This function inserting data at the beginning*/
/* Inputs 		  :  data							  		      */
/* return 		  :  void		 					 		      */
/******************************************************************/
void push(int data)
{
	//1-create a node and allocate int the memory
	Node* temp = (Node*)malloc(sizeof(Node));
		//2-initialize data into temp data field
	temp->data = data;
	 //3-top pointer into temp link 
	temp->Next = Top;
		//4-make a temp as top of the stack
	Top = temp;
} 

/*******************************************************************/
/* Description    :  This function deleting data from the beginning*/
/* Inputs 		  :  void							  		       */
/* return 		  :  void		 					 		       */
/*******************************************************************/
void pop(void)
{
	//create temp 
	Node* temp;
	//// check for stack underflow[Empty] 
	if(Top == NULL)
	{	printf("Error stack is Empty\n");
		return;
	}
	//top assign into temp
	temp =Top;
		// assign second node to top
	Top = Top->Next;
	// release memory of top node 
	free(temp);		
}


void display()
{
	Node* temp;
	// check for stack underflow 
	if(Top == NULL)
	{
		printf("Error stack is Empty\n");
		return;
	}
	else
	{
		
		 temp=Top;
		while(Top !=NULL)
		{
			      // print node data 
			printf("\n%d" ,temp->data);
			// assign temp link to temp 
			temp = temp->Next;
		}
	}
}
int main(void)
{
	push(1);
	push(2);
	push(3);
	pop();
	display();
	
	
	
	return 0;
}