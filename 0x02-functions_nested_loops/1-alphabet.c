#include"main.h"
/**
 * main- prints the alphabet, in lowercase, followed by a new line
 *
 * Return:Always 0
 *
 */
void print_alphabet(void);
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
