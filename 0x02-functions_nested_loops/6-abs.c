#include "main.h"
/**
 * _abs - a function that give the absolute value of an int
 *
 * @kutr: argument for the function
 *
 * Return: always a positive integer
 *
 */
int _abs(int kutr)
{
	if (kutr >= 0)
	{
		return (kutr);
	}
	else
	{
		kutr *= -1;
		return (kutr);
	}
}
