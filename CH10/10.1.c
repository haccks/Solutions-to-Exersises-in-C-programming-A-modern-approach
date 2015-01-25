#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define N 100

char contents[N];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char ch);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);
void print(bool a);

int main()
{
	int ch;
	
	make_empty();
	printf("Enter parentheses and/or braces: ");
	while((ch = getchar()) != EOF && ch != '\n')
	{
		if(ch != '{' && ch != '}' && ch != '(' && ch != ')')
		{
			printf("You entered a wrong character %c\nProgram terminated!!\n", ch);
			exit(0);
		}
		
		printf("%c is read\t", ch);
		if(ch == '(' || ch == '{')
			push(ch);
		else if(ch == ')')
		{
			if(pop() != '(')
				print(0);	
		}
		else if(ch == '}')
		{
			if(pop() != '{')
				print(0);
		}	
			
	}
	if(is_empty())
		print(1);
    else
		print(0);
				
	return 0;					   				
}

void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == N;
}

void push(char ch)
{
	if(is_full())
		stack_overflow();
	else
	{
		contents[top++] = ch;
		printf("%c is pushed\n", ch);
	}		
}

char pop(void)
{
	char ch;
	if(is_empty())
		stack_underflow();
	
	ch = contents[--top];
	printf("%c is poped\n", ch);
	return ch ;
	
}

void stack_overflow(void)
{
	printf("Stack overflow\n");
	exit (0);
}

void stack_underflow(void)
{
	print(0);
}

void print(bool a)
{
	if(a)
		printf("\nParentheses/braces are nested properly\n");
	else
		printf("\nThe parentheses/braces aren't nested properly\n");
		
	exit(0);	
}
