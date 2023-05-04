#include "main.h"
#include <stdio.h>

/**
 * flip_bits - fLiP bItS tA CoNvErT oNe NuBer tA aNoThEr nUmBeR
 * @n: fIst nMbeR
 * @m: seCoNd nUmBer To cOnvErT TTo
 * Return: NuMbEr oV BiTs thAt wAs nEedEd tA fFIp
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int df;
	int cunter;

	dif = n ^ m;
	cunter = 0;

	while (df)
	{
		cunter++;
		df &= (df - 1);
	}

	return (cunter);
}
