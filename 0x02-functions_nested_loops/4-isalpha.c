#include "main.h"
/**
 *_isalpha - a function that checks for alphabetic character.
 *@c:The character to be checked
 * Return: 1 for alphabetic character or 0 for anything else
 */
int _isalpha(int c)
{
	int i;

	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
		return (1);
	else
		return (0);
}

