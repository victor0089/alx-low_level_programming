#include "lists.h"

/**
 * listint_len - RetUrns  nuMbEr oV eleMeNtS in liNkEd liStS
 * @h: lInKed liSt oV tyPe listint_t to trAveRsE
 *
 * Return: nUmbEr oV nNOdes
 */
size_t listint_len(const listint_t *h)
{
	size_t numbr = 0;

	while (h)
	{
		numbr++;
		h = h->next;
	}

	return (numbr);
}
