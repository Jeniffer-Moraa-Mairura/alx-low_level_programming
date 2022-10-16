#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main - prints an integer n if is positive,n is negative or n is zero
 *
 * Return : Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative");
	}
	return (0);
}


