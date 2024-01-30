#include "main.h"
/**
 * print_last_digit - a function that gives the last digit of an int
 *
 * @kutr: argument for the function
 *
 * Return: always a single digit integer
 *
 */
int print_last_digit(int kutr)
{
	kutr = kutr % 10;

	if (kutr != 0)
	{
		return (kutr);
	}
	else
	{
		return (0);
	}
}
