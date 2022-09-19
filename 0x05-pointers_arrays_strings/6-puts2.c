#include "main.h"

/**
 *  puts2 - prints one char out of 2 of a string
 *  followed by a new line
 *  @str: string to print the chars from
 */

void puts2(char *str)
{
	int l, m;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	for (m = 0; m < l; m += 2)
	{
		_putchar(str[m]);
	}

	_putchar('\n');
}
