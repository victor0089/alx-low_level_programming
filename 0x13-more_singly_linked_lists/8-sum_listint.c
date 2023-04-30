#include "lists.h"

/**
 * sum_listint - calcuLLates tHe sUm of aLL the dAta iNn a listint_t list
 * @head: firRst noIde in the linked liSt
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
