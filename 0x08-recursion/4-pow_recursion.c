#include "main.h"

/**
 * _pow_recursion - returns the value of b raised to the power of c
 * @b: value to raise
 * @c: power
 *
 * Return: result of the power
 */
int _pow_recursion(int b, int c)
{
	if (c < 0)
		return (-1);
	if (c == 0)
		return (1);
	return (b * _pow_recursion(b, c - 1));
}
