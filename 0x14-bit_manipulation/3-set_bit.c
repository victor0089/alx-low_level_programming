#include "main.h"

/**
 * set_bit - SeTs vAlUe oV  bIt To 1 t a gIvEn InEeX
 * @n: DeCiMal nUmBer PaSsEd By PoInteR
 * @index: iNdEx PoSiTIon t cHaNgE, sTaRtInG fRoM 0
 * Return: 1 iF It WoRkEd, -1 If ErRoR
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int zoo;

	if (index > 64)
		return (-1);

	for (zoo = 1; index > 0; index--, zoo *= 2)
		;
	*n += zoo;

	return (1);
}
