/*
  C++ Program to check for balanced parentheses in an expression using stack.
  Given an expression as string comprising of opening and closing characters
  of parentheses - (), curly braces - {} and square brackets - [], we need to 
  check whether symbols are balanced or not. 
*/

#include<iostream>
#include<string.h>
#include<stack>	
		//Use Standard template library to create Stack data structure 
using namespace std;

void Reverse(char *p);

int main()
{
	char string[20];
	
	cout<<"Enter the string : ";
	cin>>string;
	
	Reverse(string);
	cout<<string<<"\n"; 
	
	
	return 0;
}

void Reverse(char *p)
{
	stack<char> S;
	
	/* Pushing to stack */
	for(int i=0; i<strlen(p); i++)		
				S.push(p[i]);
	
	/* Poping from stack */			
	for(int i=0; i<strlen(p); i++)
	{
		p[i] = S.top();
		S.pop();
	}
}