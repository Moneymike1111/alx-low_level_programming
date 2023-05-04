#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: parameter
 * @index: index of bit
 * Return: value of bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}
