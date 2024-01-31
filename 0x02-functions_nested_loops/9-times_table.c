#include "main.h"
/**
 * times_table - table
 *
 */
void times_table(void)
{
	int ke, ku, ki;

	for (ke = 0; ke < 10; ke++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (ku = 0; ku < 10; ku++)
		{
			ki = ke * ku;
			_putchar(ki + '0');
			if (ku != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
