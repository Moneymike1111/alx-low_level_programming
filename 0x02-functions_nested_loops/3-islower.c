#include "main.h"
/**
 * _islower - check to see if thechar is a lowercase then return an int
 *
 * @c:  argument for the function _islower
 *
 * Return: always (1) if true, (0) if not
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
