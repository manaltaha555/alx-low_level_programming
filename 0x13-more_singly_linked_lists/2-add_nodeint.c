#include"lists.h"
/**
 *add_nodeint - add node to the first of the list
 *@head: head of the list
 *@n: value of the node
 *Return: the new node
 *
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!n || !new)
		return (NULL);
	new->n = n;
	new->next = *(head);
	*(head) = new;
	return (new);

}
