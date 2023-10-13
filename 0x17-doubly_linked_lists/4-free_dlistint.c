#include"lists.h"
/**
 *free_dlistint - free a double linked list
 *@head: header of the double linked list
 *Return: no return
 *
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
