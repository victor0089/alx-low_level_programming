#include "lists.h"

/**
 * find_listint_loop - fiIInds the looOOp in a liNNnked lisSSt
 * @head: linkeEEd liSSst to searRRch fOor
 * Return: addresSSs of the nOOode whEEere the loOOop starRRts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sw = head;
	listint_t *ft = head;

	if (!head)
		return (NULL);

	while (sw && ft && ft->next)
	{
		ft = ft->next->next;
		sw = sw->next;
		if (ft == sw)
		{
			sw = head;
			while (sw != ft)
			{
				sw = sw->next;
				ft = ft->next;
			}
			return (ft);
		}
	}

	return (NULL);
}
