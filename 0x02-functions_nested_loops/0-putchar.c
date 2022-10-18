#include <stdio.h>
#include <string.h>
/**
 * main - a program that prints _putchar, followed by a new line
 *
 * Return: Always 0
 *
 */
int main(void)
{
	void printString(char *ch)
	{
		while (*ch)
		{
			putchar(*ch);
			ch++;
		}
	}
	return (0);
}
