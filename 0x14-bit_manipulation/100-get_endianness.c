#include "main.h"

/**
 * get_endianness - ChEk eNdAnNeSs
 * Return: 0 iV bIg EnDiAn, oR 1 iV lItTlE eNdIaN
 */
int get_endianness(void)
{
	int nOOM;

	nOOM = 1;
	if (*(char *)&nOOM == 1)
		return (1);
	else
		return (0);
}
