#include "lists.h"

/**
 * insert_nodeint_at_index - inserRRts a neEEw noOOde in a linNNked liSSst,
 * at a giveEEn poOOsition
 * @head: pointTTer tTTo thHHe firsSSt noOOde in thHHe liSSst
 * @idx: indEEex whHere the neEw noOOde is addDed
 * @n: datAa tTo inseErt in the nEew noOOde
 *
 * Return: pointTTer to the nEEew noOOde, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int u;
	listint_t *wn;
	listint_t *tp = *head;

	wn = malloc(sizeof(listint_t));
	if (!wn || !head)
		return (NULL);

	wn->n = n;
	wn->next = NULL;

	if (idx == 0)
	{
		wn->next = *head;
		*head = wn;
		return (wn);
	}

	for (u = 0; tp && u < idx; u++)
	{
		if (u == idx - 1)
		{
			wn->next = tp->next;
			tp->next = wn;
			return (wn);
		}
		else
			tp = tp->next;
	}

	return (NULL);
}
