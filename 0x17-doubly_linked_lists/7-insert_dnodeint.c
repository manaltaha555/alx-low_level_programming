#include"lists.h"
/**
 *insert_dnodeint_at_index - insert a node in given index
 *@h: header to the double linked list
 *@idx: the index of the node to be inserted
 *@n: the value of the node
 *Return: null or a pointer to the node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->prev->next = new;
	tmp->next = new;
	return (new);
}
