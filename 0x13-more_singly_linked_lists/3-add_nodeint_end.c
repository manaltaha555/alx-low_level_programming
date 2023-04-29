#include"lists.h"
/**
 *add_nodeint_end -  add node at the end of the list
 *@head: pointer to the list
 *@n: value of the node
 *Return: the new node
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !n)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
