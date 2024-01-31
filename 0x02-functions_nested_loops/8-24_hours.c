#include "main.h"
/**
 * jack_bauer - prints every minutes in a twenty four hour
 *
 */
void jack_bauer(void)
{
	int st, st1;
	int dk, dek;

	for (st = 0; st < 24; st++)
	{
		for (st1 = 0; st1 < 9; st1++)
		{
			for (dek = 0; dek < 6; dek++)
			{
				for (dk = 0; dk < 10; dk++)
				{
					_putchar(st + '0');
					_putchar(st1 + '0');
					_putchar(':');
					_putchar(dek + '0');
					_putchar(dk + '0');
					_putchar('\n');

				}
				dk = 0;
			}
			dek = 0;
		}
		st1 = 0;
	}
}
