/*
  C Program to check for balanced parentheses in an expression using stack.
  Given an expression as string comprising of opening and closing characters
  of parentheses - (), curly braces - {} and square brackets - [], we need to 
  check whether symbols are balanced or not. 
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define MAX_NUM 10 //maximum number of element in the stack

int STACK[MAX_NUM]; //define array

int top=-1; //top of stack

/*function to push character (item)*/
void push(char item);

/*function to pop character (item)*/
char pop(void);

/*function to pop last character(item) without decrement top*/
char peak(void);

/*function to check stack is empty or not*/
int IsEmpty(void);

/*function to check stack is full or not*/
int IsFull(void);

/*function to print element of stsck*/
void display(void);

// Function to check whether two characters are opening 
// and closing of same type.
int ArePair(char opening , char closing);

//function to check if expression is balanced or not
int AreParanthesesBalanced(char * expression);


int main(void)
{
	
	char exp[MAX_NUM];//define array to store expression
	
	printf("Enter expression you want to check : ");
	
	//scan expression from user
	scanf("%[^\n]s",exp);
	
	  //check if AreParanthesesBalanced(exp) is true or not
	if(AreParanthesesBalanced(exp))
		printf("Balanced");
	
		else
		printf("Not Balanced\n");
		

	return 0;
}//end main 

void push(char item)
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