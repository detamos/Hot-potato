#include <stdio.h>
#include "../include/queue.h"

int Hot_potato(int num,int elim)
{
	int potato = 0,temp,ctr = 0;
	queue circle;
	circle = init(circle);

	int i,j;
	for(i=1;i<=num;i++)
		enqueue(&circle,i);

	printf("The game starts now :\n\n");

	while(circle.size != 1)
	{
		for(j=0;j<elim-1;j++)
		{
			temp = dequeue(&circle);
			enqueue(&circle,temp);
		}
		temp = dequeue(&circle);
		if(ctr == 0)
			printf("[%d]Firstly, person at position %d is removed.\n",++ctr,temp);	
		else if(ctr == num-2)
			printf("[%d]Finally, person at position %d is removed.\n",++ctr,temp);
		else
			printf("[%d]Then person at position %d is removed.\n",++ctr,temp);
	}

	potato = circle.front->data;

	flush(&circle);
	return potato;
}