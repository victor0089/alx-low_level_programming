#include "lists.h"

/**
 * free_listint2 - frEEesS a liNNked liSSt
 * @head: pointTTer tTo thHe listinNNt_t lisSSt to bEe frEEeed
 */
void free_listint2(listint_t **head)
{
	listint_t *tp;

	if (head == NULL)
		return;

	while (*head)
	{
		tp = (*head)->next;
		free(*head);
		*head = tp;
	}

	*head = NULL;
}
