#include "lists.h"

/**
 * get_nodeint_at_index - reTurns the nOde at a ceRtain inDdex in a liNked list
 * @head: firRRst noOOde in the linkeEEd lisIIt
 * @index: indeEEx of the noOOde to reEEturn
 *
 * Return: pointEEer tOOo the noOOde we'rRRe looOOking foOOr, oOOr NUUULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int u = 0;
	listint_t *tp = head;

	while (tp && u < index)
	{
		tp = tp->next;
		u++;
	}

	return (tp ? tp : NULL);
}
