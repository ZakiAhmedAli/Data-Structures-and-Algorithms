#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_NUM 10

int STACK[MAX_NUM];

int top=-1;

void push(int item);

char pop();
char peak();

int IsEmpty();

int IsFull();

void display();

int ArePair(char opening , char closing);

int AreParanthesesBalanced(char * expression);


int main(void)
{
	
	char exp[MAX_NUM];
	
	printf("Enter expression you want to check : ");
	scanf("%[^\n]s",exp);
	
	if(AreParanthesesBalanced(exp))
		printf("Balanced");
	
		else
		printf("Not Balanced\n");
		

	return 0;
}

void push(int item)
{
	if(IsFull())
	{
		printf("\nStack is FULL !!!\n");
		return;
	}
	top++;
	STACK[top] = item;
}

char pop()
{
    /*check for empty*/
    if(IsEmpty())
    {
        printf("\nStack is EMPTY!!!\n");
        return 0;
    }
	
	return STACK[--top];
}
char peak()
{
	    /*check for empty*/
    if(IsEmpty())
    {
        printf("\nStack is EMPTY!!!\n");
        return 0;
    }
	
	return STACK[top];
}

int IsEmpty()
{
	if(top == -1)
	{
		return 1;
	}
	else 
		return 0;
}

int IsFull()
{
	if(top == MAX_NUM -1) 
		return 1;
	else 
		return 0;
}

void display(void)
{
	int i=0;
	printf("Stack element = \n");
	for(i=0 ; i<= top ; i++)
	{
		printf("  %d\n",STACK[i]);
	}

}

int ArePair(char opening , char closing)
{
	if(opening =='(' && closing ==')') return 1;
	
	if(opening =='[' && closing ==']') return 1;
	
	if(opening =='{' && closing =='}') return 1;
		
		return 0;
}

int AreParanthesesBalanced(char *expression)
{
	int i ;
	char temp;
	
	for(i=0 ; i< strlen(expression) ; i++)
	{
		if(expression[i]=='(' || expression[i] == '[' || expression[i]=='{')
			push(expression[i]);
		
		else if(expression[i] == ')' || expression[i] ==']' || expression[i] == '}' )
		{
			temp = peak();
			if(IsEmpty() || !ArePair(temp , expression[i]))
			{
				printf("miss matched parantheses are : %c %c",temp , expression[i]);
				return 0;
			}
			else
				pop();
		}
	}
	
/*	
 if(IsEmpty()) //stack empty
    {
        printf("Balanced Parentheses\n");
         return 1;
    }
	
  else
  {
     printf("Left parentheses more than right parentheses\n");
     return 0;
  }
*/
}