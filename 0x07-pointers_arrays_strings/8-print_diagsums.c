#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int u;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (u = 0; u < size; u++)
	{
		sum += a[(size * u) + u];
		sum1 += a[(size * (u + 1)) - (u + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
