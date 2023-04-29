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

	if (!n)
		return (NULL);
	new = malloc(sizeof(listint_t));
	new->next = *(head);
	new->n = n;
	*(head) = new;
	return (new);

}
