#include <stdio.h>
/**
 * main -print the alphabet in lowercase, and then in uppercase
 *
 * Description: File 3 Prints alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
		putchar('\n');
	return (0);
}