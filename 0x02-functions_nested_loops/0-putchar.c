#include "main.h"
/**
 * main - writes out _putchar using _putchar
 *
 * Return : always returns (0)
 *
 */
int main(void)
{
	int a;
	char kal[] = "putchar";

	_putchar('_');

	for (a = 0; a < 7; a++)
	{
		_putchar(kal[a]);
	}

	_putchar('\n');
	return (0);
}
