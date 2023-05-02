#include"lists.h"
/**
 *insert_nodeint_at_index - insert node at specific index
 *@head: pointer to a liked list
 *@idx: index
 *@n: value of the node
 *Return: the new node
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp1, *temp2;
	unsigned int size = 0;

	if (!head || !(*head))
		return (NULL);
	temp1 = *head;
	temp2 = *head;
	while (temp1)
	{
		temp1 = temp1->next;
		size++;
	}
	if (idx > size)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (idx > 1)
	{
		temp2 = temp2->next;
		idx--;
	}
	new->next = temp2->next;
	temp2->next = new;
	return (new);
}
