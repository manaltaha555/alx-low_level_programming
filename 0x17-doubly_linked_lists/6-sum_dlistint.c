#include"lists.h"
/**
 *sum_dlistint - returns sum of all data in double linked list
 *@head: header of the double linked list
 *Return: sum of the data
 *
 *
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
