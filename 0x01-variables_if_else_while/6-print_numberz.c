#include <stdio.h>
/**
 * main- print all single digit numbers of base 10 starting from 0
 *
 * Description: file 6 numbers
 *
 * Return:Always 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}