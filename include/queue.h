#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct list
{
	struct node *front,*rear;
	int size;
}queue;

queue init(queue q)
{
	q.size = 0;
	q.front = q.rear = NULL;
	return q;
}

queue enqueue(queue q,int data)
{
	struct node *temp = NULL;
	if((q).front == NULL && (q).rear == NULL)
	{
		temp = (struct node *) malloc(sizeof(struct node));
		
		temp->next = NULL;
		temp->data = data;

		(q).front = (q).rear = temp;
		(q).size = 1;
	}
	else
	{
		temp = (struct node *) malloc(sizeof(struct node));

		(q).rear->next = temp;
		temp->data = data;
		temp->next = NULL;

		(q).rear = temp;
		(q).size++;
	}
	return q;
}

int dequeue(queue *q)
{
	if((*q).rear == NULL 
		&& (*q).front == NULL)
		return INT_MIN;

	struct node *temp = NULL;
	temp = (*q).front;
	int data;

	data = temp->data;

	if(temp->next != NULL)
	{
		temp = temp->next;
		free((*q).front);
		(*q).front = temp;
	}
	else
	{
		free((*q).front);
		(*q).front = (*q).rear = NULL;
	}
	(*q).size--;
	return data;
}

void print(queue q)
{
	struct node *temp = NULL;
	temp = (q).front;

	if(temp	== NULL && (q).rear == NULL)
	{
		printf("Queue is empty\n");
		return ;
	}

	while(temp != (q).rear)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}

	if(temp == (q).rear)
		printf("%d ",temp->data);

	printf("\n");
}

void flush(queue *q)
{
	struct node *temp = NULL;
	temp = (*q).front;

	while(temp != (*q).rear)
	{
		temp = (*q).front->next;
		free((*q).front);
		(*q).front = temp;
	}

	free(temp);
	(*q).front = (*q).rear = NULL;
}
#endif