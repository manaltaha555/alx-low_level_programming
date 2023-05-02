#include"lists.h"
/**
 *reverse_listint -  reverse a list
 *@head: pointer to a linked list
 *Return: pointer to the head of the linked list
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *next = NULL;

	if (!head)
		return (NULL);
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = p;
		prev = *head;
		*head = next;
	}
	*head = p;
	return (*head);
}
