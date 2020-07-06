//delete file nth position
#include<stdio.h>
#include<stdlib.h>

struct Node* head;

struct Node
{
	int data;
	struct Node* next;
};
 
	//Given a reference (pointer to pointer) to the head of a list and  
   //an int, inserts a new node on the front of the list.
void push(int data , int position) 
{ 
    // 1. allocate node 
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
  
    // 2. put in the data  
    new_node->data  = data; 
  
    // 3. Make next of new node as NULL 
    new_node->next = NULL; 
  
	if(position =1)
	{
		new_node->next=head;
		head = new_node;
		return;
	}
	struct Node* new_node2=head;
		int i;
	for(i=0 ; i<position-2 ; i++)
	{
		new_node2 = new_node2->next;
	}
	new_node->next = new_node2->next;
	new_node2->next = new_node;
} 

// This function prints contents of linked list starting from head 
void print(){
	
struct Node* temp = head ;
//printf("list is : ");
while(temp!=NULL)
{
	printf(" %d ",temp->data);
	temp=temp->next;
}
puts("\n");
}

void Delete(int position)
{
	struct Node* temp1 = head;
	 if(position ==1)
	 {
		 head = temp1->next ;
		 free(temp1);
		 return;
	 }
	 int i;
	 for(i=0 ; i<position-2 ; i++)
		temp1 = temp1->next;
		
		
		 struct Node* temp2 = temp1->next;
		  temp1->next = temp2->next;
		  //temp2->next = temp1;

		free(temp2);
}


void Reverse()
{
	struct Node *prev=NULL;
	struct Node *current=head;
	struct Node	*next;
	 while(current != NULL)
	 {
		// Store next 
        next = current->next;
		
        // Reverse current node's pointer 
        current->next = prev; 		 
		prev = current;
		current = next;
	 }
	 head = prev;
}


int main()
{

head =NULL;
push(1,2);
push(2,1);
push(3,4);
push(5,5);
push(6,6);
push(7,5);
print();
Delete(3);
print();
Reverse();
print();

	return 0;

}



