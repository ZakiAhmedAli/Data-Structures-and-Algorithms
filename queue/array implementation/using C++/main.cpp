/* Queue - Circular Array implementation in C++*/


#include<iostream>

using namespace std;

#define MAX_SIZE 10   //maximum size of the array that will store Queue.


// Creating a class named Queue.
class Queue
{
	private :
		
		int array[MAX_SIZE];
		int front, rear;
		
	public :
		
	// Constructor - set front and rear as -1. 
	// We are assuming that for an empty Queue, both front and rear will be -1.
		Queue() : front(-1) , rear(-1)
		{
		}		
		bool IsEmpty()
		{
			if( (rear==-1 && front==-1) )
				return true;
			
			else return false;
		}
		bool IsFull()
		{
			return (rear+1)%MAX_SIZE == front ? true : false;
		}
		
	
		void Enqueue(char data)
		{
			if(IsFull())
			{
				cout<<"Error Queue is full\n";
				return;
			}
			else if(IsEmpty())
			{
				front =0;
				rear  =0;
			}
			else
			{
				rear = (rear + 1) % MAX_SIZE;
			}
			
			array[rear] = data;
		}

		void Dequeue(void)
		{
			if(IsEmpty())
			{
				cout<<"Error Queue Is Empty\n";
				return;
			}
			else if(front == rear ) 
			{
				rear = front = -1;
			}
			else
			{
				front = (front+1) % MAX_SIZE;
			}
		}

	// Returns element at front of queue. 
		int Front()
		{
			if(front == -1)
			{
				cout<<"Error: cannot return front from empty queue\n";
				return -1; 
			}
			return array[front];
		}		
	/* 
	   Printing the elements in queue from front to rear. 
	   This function is only to test the code. 
	   This is not a standard function for Queue implementation. 
	*/
		void Print(void)
		{
			if(IsEmpty())
			{
				cout<<"Queue Is Empty\n";
				return;
			}
			
			for(int i=front ;i < rear ;i++)
			{
				cout<<array[front+i]%MAX_SIZE<<"  \n";
			}

		}
};

int main(void)
{
	/*Driver Code to test the implementation
	  Printing the elements in Queue after each Enqueue or Dequeue 
	*/
   Queue Q; // creating an instance of Queue. 

	  Q.Enqueue(2);    
	  Q.Enqueue(4);   
	  Q.Print();
	  Q.Dequeue();
	  Q.Print();
	   
   
	return 0;
}