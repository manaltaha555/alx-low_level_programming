#include"lists.h"
/**
 *sum_listint - sum of all data of the list
 *@head: pointer to the first element in the list
 *Return: sum of the data in the list
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (!head)
		return (0);
	temp = malloc(sizeof(listint_t));
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	free(temp);
	return (sum);
}
