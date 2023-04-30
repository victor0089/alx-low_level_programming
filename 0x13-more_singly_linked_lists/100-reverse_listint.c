#include "lists.h"

/**
 * reverse_listint - reveRses a liNNnked list
 * @head: poinTer to the fiRst noOOde in the liSt
 *
 * Return: pointeEEr tOo the fiRrst noOOde in the nNew liSst
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *back = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = next;
	}

	*head = back;

	return (*head);
}
