#include "main.h"
/**
 * print_alphabet_x10 - prints the lowrcase alphabet ten times
 * using _putchar
 *
 */
void print_alphabet_x10(void)
{
	char kal;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (kal = 'a'; kal <= 'z'; kal++)
		{
			_putchar(kal);
		}
		_putchar('\n');
	}
}

