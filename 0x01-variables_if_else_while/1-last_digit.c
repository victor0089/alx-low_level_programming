#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the last digit of a number randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	else if (m == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}
