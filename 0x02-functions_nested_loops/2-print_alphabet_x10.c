#include"main.h"
/**
 *print_alphabet_x10 -> Prints alphabets 10 times
 */
void print_alphabet_x10(void)
{
	char(k);
	int (j);

	while (j <= 9)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar (k);
		}
		_putchar('\n');
	}
		j++;
}
