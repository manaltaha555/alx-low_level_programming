#include"lists.h"
/**
 *dlistint_len - function find the lenght of a double linked list
 *@h: header of the double linked list
 *Return: lenght of the linked list
 *
 *
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
