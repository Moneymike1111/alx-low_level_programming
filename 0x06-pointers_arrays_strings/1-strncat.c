#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: to add string
 * @dest: string destination.
 * @n: number of bytes
 * Return: value of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;

	while (src[j] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
