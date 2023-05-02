#include "lists.h"

/**
 * get_nodeint_at_index - get node at specific index
 * @head: pointer to the linked list
 * @index: index of the node
 * Return: the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int n;

	for (temp = head, n = 0; temp && n < index; temp = temp->next, n++)
		;
	return (temp ? temp : NULL);
}
