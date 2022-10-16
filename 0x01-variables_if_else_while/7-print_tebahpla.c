#include <stdio.h>
/**
 * main- Prints the lowercase alphabet in reverse
 *
 * Description: File 7-print_tebahpla.c
 *
 * Return
 *
 */

int main(void)

{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
