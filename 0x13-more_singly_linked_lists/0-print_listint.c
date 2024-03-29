#include "lists.h"

/**
 * print_listint - PrInts All eleMeNts of linked list
 * @h: linked list of type listint_t to priNt
 *
 * Return:NnMbEr oV NOOOdeSSS
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}

	return (number);
}
