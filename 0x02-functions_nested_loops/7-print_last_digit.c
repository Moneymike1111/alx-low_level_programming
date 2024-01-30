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
	int kor;

	kor = kutr % 10;

	_putchar(kor)
	return (kor);
}
