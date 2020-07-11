#include<stdio.h>
#include<string.h>

//define max size of the array
#define MAX_SIZE  10

//define an array that is global to can access for all function 
int arr[MAX_SIZE];

 // first element of the stack
 int top =-1;

/*

*/
void push(int x)
{
	if(top == MAX_SIZE)
	{
		printf("stack overflow\n");
		return;
	}
	arr[++top] = x;
}
void pop()
{
	if(top == -1)
	{
		printf("Erro : No Elements to pop\n");
	}
	top--;
}
void print(void)
{
	int i=0;
	printf("Stack element = \n");
	for(i=0 ; i<= top ; i++)
	{
		printf("  %d \n\n",arr[i]);
	}

}
 
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