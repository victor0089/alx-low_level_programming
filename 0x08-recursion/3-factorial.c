#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @h: number to return the factorial from
 *
 * Return: factorial of h
 */
int factorial(int h)
{
	if (h < 0)
		return (-1);
	if (h == 0)
		return (1);
	return (h * factorial(h - 1));
}
