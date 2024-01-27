#include <stdio.h>
/**
 * main - prints using putchar the combination
 * of three digits in an accending order with
 * a coma and space in between expcept the last digit
 *
 * Return: Always return (0)
 */

int main(void)
{
	int kutr = '0';
	int LelaKutr = '0';
	int soste = '0';

	while (soste <= '9')
	{
		while (kutr <= '9')
		{
			while (LelaKutr <= '9')
			{
				if (kutr < LelaKutr && kutr > soste)
				{
					putchar(soste);
					putchar(kutr);
					putchar(LelaKutr);

					if (LelaKutr >= '1' && (LelaKutr != '9' || kutr != '8' || soste != '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				LelaKutr++;
			}
			kutr++;
			LelaKutr = '0';

		}
		soste++;
		kutr = '0';
		LelaKutr = '0';
	}
	putchar('\n');
	return (0);
}

