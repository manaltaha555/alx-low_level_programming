#include"lists.h"
/**
 *delete_nodeint_at_index -  delete note at specific index
 *@head: pointer to the linked list
 *@index: the index of the node to be deleted
 *Return: 1 or -1
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *node;
	unsigned int i = 0;

	if (!head)
		return (-1);
	temp = *head;
	node = (*head)->next;
	if (index == 0)
	{
		(*head)->next = NULL;
		free(head);
		return (1);
	}
	for (; temp && i < index; i++)
	{
		if (i == index - 1)
		{
			temp->next = node->next;
			node->next = NULL;
			free(node);
			return (1);
		}
		else
		{
			temp = temp->next;
			node =  node->next;
		}
	}
	return (-1);
}
