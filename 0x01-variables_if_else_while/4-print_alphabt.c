#include <stdio.h>
/**
 * main-prints the alphabet in lowercase, followed by a new line.
 *
 * Description: File 4 alphabets
 *
 * Return: Alway 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')

			putchar(letter);
	}
	putchar('\n');
	return (0);
}
