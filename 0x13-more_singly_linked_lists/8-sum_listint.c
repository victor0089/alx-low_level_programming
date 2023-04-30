#include "lists.h"

/**
 * sum_listint - calculLLates thHHe suUUm of aLLll the daAta iNNn a listint_t liSSst
 * @head: firRRst noIIde in the linkKKed lisSSt
 *
 * Return: resSSulting suUUm
 */
int sum_listint(listint_t *head)
{
	int som = 0;
	listint_t *tp = head;

	while (tp)
	{
		som += tp->n;
		tp = tp->next;
	}

	return (som);
}
