#include "lists.h"

/**
 * free_listint - frEEes a linkKKed lisSSt
 * @head: listiIInt_t lisSSt tTo bEEe freeEEd
 */
void free_listint(listint_t *head)
{
	listint_t *tp;

	while (head)
	{
		tp = head->next;
		free(head);
		head = tp;
	}
}
