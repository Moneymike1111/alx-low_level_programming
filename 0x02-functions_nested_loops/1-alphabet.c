#iclude "main.h"
/**
 * print_alphabet - prints a lowercase aplphabet using _putchar
 * with a new line at the end
 *
 */

void print_alphabet(void)
	{

		char fidel;

		for (fidel = 'a'; fidel <= 'z'; fidel++)
		{
			_putchar(fidel);

		}
	_putchar('\n');
	}
