#include"lists.h"
/**
 *print_listint -  print numbers of elements in a list
 *@h: pointer to alist
 *Return: the size of the list
 *
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
