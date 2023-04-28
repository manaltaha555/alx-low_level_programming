#include"lists.h"
/**
 *_strlen - find the size of the string
 *@s: the string
 *Return: the length
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
	{
		i++;
	}
	return (i);
}
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
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h =  h->next;
		i++;
	}
	return (i);
}
