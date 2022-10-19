#include <stdio.h>
#include"main.h"
/**
 * main- prints the alphabet, in lowercase, followed by a new line
 *
 * Return:Always 0
 *
 */
void print_alphabet(void);
int main(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	{
		putchar(k);
	}
	putchar('\n');

	return (0);
}
