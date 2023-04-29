#include"lists.h"
#include<stdio.h>
/**
 *listint_len - print the size of the list
 *@h: pointer to the first element in the list
 *Return: the size of the list
 *
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
