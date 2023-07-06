#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sEt tHe vAlUe oV  bIt tA 0 At a gIvEn iNdEx
 * @n: PoIntEr tA dEcImAl nUmBeR tA cHanGe
 * @index: inDeX pOsItIoN tO cHaNgE
 * Return: 1 If It WoYkEd, -1 iV ErRor
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int Q;
	unsigned int hoold;

	if (index > 64)
		return (-1);
	hoold = index;
	for (Q = 1; hoold > 0; Q *= 2, hoold--)
		;

	if ((*n >> index) & 1)
		*n -= Q;

	return (1);
}
