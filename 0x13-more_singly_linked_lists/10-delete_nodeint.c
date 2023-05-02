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

	temp = *head;
	node = (*head)->next;
	if (!head)
	{
		free(temp);
		free(node);
		free(head);
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (; i < index; i++)
	{
		if (!temp || !(temp->next))
			return (-1);
		if (i == index - 1)
		{
			temp = node->next;
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
