#include "main.h"
/**
 * _isalpha - check to see if thechar is a lower or uppercase
 *
 * @c:  argument for the function _isalpha
 *
 * Return: always (1) if true, (0) if not
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
