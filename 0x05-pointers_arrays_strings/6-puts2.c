#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: string to print the chars from.
 */
void puts2(char *str)
{
	int i = 0, j;


	while (str[i])
		i++;

	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
