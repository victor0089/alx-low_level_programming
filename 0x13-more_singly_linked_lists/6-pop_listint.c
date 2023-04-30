#include "lists.h"

/**
 * pop_listint - deletEEs thHe heEEad noOOde oV a linNNked lIIIst
 * @head: pointTTer tOOo thHHe fiIIrst elemeEEnt iIIn thHHe linkeEEd lisSSt
 *
 * Return: the daAAta insSSide thHHe elemeEEnts thaAAt wAAas delEEeted,
 * or 0 if the liSSst is empPPty
 */
int pop_listint(listint_t **head)
{
	listint_t *tp;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	tp = (*head)->next;
	free(*head);
	*head = tp;

	return (number);
}
