#include <stdio.h>

/**
 * main - Entry point
 * Description : prints all possible combinations of single-digit numbers
 * Return: 0 checks passed
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
