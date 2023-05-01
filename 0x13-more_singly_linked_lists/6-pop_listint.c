#include"lists.h"
/**
 *pop_listint - remove the first element in the list
 *@head: the list
 *Return: value of the deleted element
 *
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (!head || !(*head))
		return (0);
	if (!((*head)->n))
		return (0);
	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	return (n);
}
