#include "lists.h"

/**
 * add_nodeint_end - adDd a nOOde aTt tThe eEnd oVV a lIInked liSSt
 * @head: pOIInter to thHe fiRRst elemEEnt in thEe lisSt
 * @n: dAAta to insEErt in tHe nEEw eleMMent
 *
 * Return: pointeEEr to thHe nEEw nOOde, or NUULL if it fAAils
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *wn;
	listint_t *tp = *head;

	wn = malloc(sizeof(listint_t));
	if (!wn)
		return (NULL);

	wn->n = n;
	wn->next = NULL;

	if (*head == NULL)
	{
		*head = wn;
		return (wn);
	}

	while (tp->next)
		tp = tp->next;

	tp->next = wn;

	return (wn);
}
