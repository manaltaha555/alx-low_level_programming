#include"main.h"
#include<stdlib.h>
/**
 *_strdup - function that return a pointer to a new allocated memory
 *@str: string
 *Return: pointer or null
 */
char *_strdup(char *str)
{
	int size = 0, i = 0;
	char *m;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
		;
	m = malloc(size * sizeof(*str) + 1);
	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
