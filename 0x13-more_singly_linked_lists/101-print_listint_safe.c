#include "lists.h"
/**
 * print_listint_safe - fuNction thAt pRnts a liNkd liSst wIith a lOop safEly.
 * @head: pointTTer to the 1st noOde of the linkKKed liSSst
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tp_m = NULL;
	const listint_t *l_m = NULL;
	size_t cuot= 0;
	size_t wn_n;

	tp_m = head;
	while (tp_m)
	{
		printf("[%p] %d\n", (void *)tp_m, tp_m->n);
		cuot++;
		tp_m = tp_m->next;
		l_m = head;
		wn_n = 0;
		while (wn_n < cuot)
		{
			if (tp_m == l_m)
			{
				printf("-> [%p] %d\n", (void *)tp_m, tp_m->n);
				return (cuot);
			}
			l_m = l_m->next;
			wn_n++;
		}
		if (!head)
			exit(98);
	}
	return (cuot);
}
