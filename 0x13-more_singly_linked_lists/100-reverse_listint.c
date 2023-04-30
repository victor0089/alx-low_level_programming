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
	listint_t *frd = NULL;

	while (*head)
	{
		frd = (*head)->frd;
		(*head)->frd = back;
		back = *head;
		*head = frd;
	}

	*head = back;

	return (*head);
}
