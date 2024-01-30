#include "main.h"
/**
 * print_sign - checks if an int is bigger,lessser or equal to zero
 *
 * @n: an argument for the function
 *
 * Return: (0) fot zero, (+) for positive and (-)for negative int
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
