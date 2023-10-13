#include"lists.h"
/**
 *add_dnodeint - add node in the begining of doble linked list
 *@head: head of the double linked list
 *@n: the value of the new node
 *Return: the address of the new node
 *
 *
 *
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!head || !new)
	{
		return (new ? free(new), NULL : NULL);
	}
	new->n = n;
	new->prev = NULL;
	if (!*head)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
