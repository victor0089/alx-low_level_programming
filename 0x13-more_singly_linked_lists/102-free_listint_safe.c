#include "lists.h"

/**
 * free_listint_safe - frEEs a liNked lisSt
 * @h: poinTTter to the firSSst noOOde in the linNNked liSSst
 * Return: numbBBer of eleEEments in tTThe freEEed lisSSt
 */
size_t free_listint_safe(listint_t **h)
{
	size_t leng = 0;
	int diff;
	listint_t *tp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			tp = (*h)->next;
			free(*h);
			*h = tp;
			leng++;
		}
		else
		{
			free(*h);
			*h = NULL;
			leng++;
			break;
		}
	}

	*h = NULL;

	return (leng);
}
