#include"lists.h"
/**
 *delete_dnodeint_at_index - delete a node in given index
 *@head: header to the double linked list
 *@index: the index of the node to be deleted
 *Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;

	if (*head == NULL)
		return (-1);
	for (; index != 1; index--)
	{
		if (node == NULL)
			return (-1);
		node = node->next;
	}
	if (node == *head)
	{
		*head = node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		node->prev->next = node->next;
		if (node->next != NULL)
			node->next->prev = node->prev;
	}
	free(node);
	return (1);
}
