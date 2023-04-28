#include"lists.h"
/**
 *print_list - prints all elements in the list and their sizes
 *@h: pointer to the list
 *Return: size of the list
 *
 *
 *
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", h->len, h->str ? h->str : "(nil)");
		h =  h->next;
		i++;
	}
	return (i);
}
