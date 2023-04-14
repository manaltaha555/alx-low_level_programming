#include"main.h"
#include<stdlib.h>
/**
 *size - clclate the size of a string
 *@a: the string
 *Return: the size of a string
 */
unsigned int size(char *a)
{
	unsigned int i = 0;

	while (a[i] != '\0')
		i++;
	return (i);
}
/**
 *string_nconcat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: pointer to a newwelly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	m = malloc((size(s1) + n) + 1);
	if (m == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		m[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		m[i] = s2[j];
		i++;
	}
	m[i] = '\0';
	return (m);
}
