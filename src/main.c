#include <stdio.h>

int Hot_potato(int num,int elim);

int main()
{
	int num,elim,winner;

start_num:
	printf("Enter the number of children :\t");
	scanf("%d",&num);
	if(num <= 0)
	{
		printf("\nERROR : Number of children should be greater than 0\n\n");
		goto start_num;
	}

start_elim:
	printf("Enter the elimination number :\t");
	scanf("%d",&elim);
	if(elim <= 1)
	{
		printf("\nERROR : The elimination number should be greater than 1\n\n");
		goto start_elim;
	}

	winner = Hot_potato(num,elim);

	printf("\nHence the person at position %d survives. (WINNER)\n\n",winner);
	return 0;
}