#include <stdio.h>
/**
 * main - prints using putchar the combination
 * of two digits in an accending order with
 * a coma and space in between expcept the last digit
 *
 * Return: Always return (0)
 */

int main(void)
{
	int kutr = '0';
	int LelaKutr = '0';

	while (kutr <= '9')
	{
		while (LelaKutr <= '9')
		{
			if (kutr < LelaKutr && kutr != LelaKutr)
			{
				putchar(kutr);
				putchar(LelaKutr);

				if (LelaKutr >= '1' && (LelaKutr != '9' || kutr != '8'))
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
	putchar('\n');
	return (0);
}

