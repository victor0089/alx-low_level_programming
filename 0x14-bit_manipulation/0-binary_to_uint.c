#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - coNveRt a bInAry nmbEr tO An uNsiGnEd InT
 * @b: cHar sTrInG
 * Return: cOnvErtEd deCiMaL nuMbEr Or 0 iF tHeRe Is aN unConVerTabLe ChAr
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ttal, pwer;
	int ln;

	if (b == NULL)
		return (0);

	for (ln = 0; b[ln]; ln++)
	{
		if (b[ln] != '0' && b[ln] != '1')
			return (0);
	}

	for (pwer = 1, ttal = 0, ln--; ln >= 0; ln--, pwer *= 2)
	{
		if (b[ln] == '1')
			ttal += pwer;
	}

	return (ttal);
}
