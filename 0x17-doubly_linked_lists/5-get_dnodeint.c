#include"lists.h"
/**
 *get_dnodeint_at_index - finds node at a given index in a double linked list
 *@head: header of the double linked list
 *@index: the index of the node
 *Return: null or a pointer to the node
 *
 *
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node = head;

	while (node)
	{
		if (i == index)
			return (node);
		i++;
		node = node->next;
	}
	return (NULL);
}
