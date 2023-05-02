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
	listint_t *new, *temp;
	unsigned int i = 0;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (!head || !new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
