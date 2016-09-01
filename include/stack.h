#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct list
{
	struct node *top;
	int size;
}stack;

stack init(stack s)
{
	s.size = 0;
	s.top = NULL;
	return s;
}

stack push(stack s,int data)
{
	struct node *temp = NULL;
	temp = (struct node *) malloc(sizeof(struct node));
	temp->data = data;

	if(s.top != NULL)
		temp->next = s.top;
	s.top = temp;
	return s;
}

int pop(stack *s)
{
	if((*s).top == NULL)
		return INT_MIN;
	int data;
	struct node *temp = NULL;

	temp = (*s).top->next;
	data = (*s).top->data;
	free((*s).top);
	(*s).top = temp;

	return data;
}

void print(stack s)
{
	struct node *temp = NULL;
	temp = s.top;

	if(temp == NULL)
	{
		printf("Stack is empty\n");
		return;
	}	

	do
		printf("%d ",temp->data);
	while((temp = (temp->next));
}

void flush(stack *s)
{
	struct node *temp = NULL;
	temp = (*s).top;

	while(temp!=NULL)
	{
		temp = (*s).top->next;
		free(top);
		top = temp;
	}

	free(temp);
	(*s).top = NULL;

	return s;
}

#endif