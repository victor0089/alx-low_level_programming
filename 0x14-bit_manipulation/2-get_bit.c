#include "main.h"
#include <stdio.h>
/**
 * get_bit - gEt te vAlUe oV  bIt a  gIvEn iNdEx
 * @n: nUmBer t eValUaTe
 * @index: iNdEx StArTiNg fRoM 0, oV te BiT wE wAnt t gEt
 * Return: VaLuE oV bIt aT IndEx, oR -1 iV rrOr
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hoold;

	if (index > 64)
		return (-1);

	hoold = n >> index;

	return (hoold & 1);
}
