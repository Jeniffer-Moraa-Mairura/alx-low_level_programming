#include <stdio.h>
/**
 * main -prints the alphabet in lowercase, followed by a new line
 *
 * Description: File: 2-print_alphabet.c
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)


		putchar(letter);

	putchar('\n');
	return (0);
}
