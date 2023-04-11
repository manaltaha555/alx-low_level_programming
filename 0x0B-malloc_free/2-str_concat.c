#include"main.h"
#include<stdlib.h>
/**
 *str_concat - function tha t concatinate two strings
 *@s1: first string
 *@s2: second string
 *Return: pointer to a string
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i = 0;
	char *m;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	for (; s1[size1] != '\0'; size1++)
		;
	for (; s2[size2] != '\0'; size2++)
		;
	m = malloc((size1 + size2) * sizeof(char) + 1);
	if (m == 0)
	{
		return (0);
	}
	else
	{
		for (; i <= size1 + size2; i++)
		{
			if (i < size1)
				m[i] = s1[i];
			else
				m[i] = s2[i - size1];
		}
	}
	m[i] = '\0';
	return (m);
}
