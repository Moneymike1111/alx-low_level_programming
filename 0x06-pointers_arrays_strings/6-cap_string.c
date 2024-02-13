#include "main.h"
/**
 * cap_string - capitilizes letters that are first letters of a word
 *
 * @ka: input
 *
 * Return: kal
 *
 *
 */
char *cap_string(char *ka)
{
	int k;

	for (k = 0; ka[k] != '\0'; k++)
	{
		if ((ka[k] >= 'a' && ka[k] <= 'z') && k == 0)
			ka[k] = ka[k] - 32;
		if ((ka[k + 1] >= 'a' && ka[k + 1] <= 'z') && (ka[k] >= 32 && ka[k] <= 40))
			ka[k + 1] = ka[k + 1] - 32;
	}
	return (ka);
}
