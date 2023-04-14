#include"main.h"
#include<stdlib.h>
/**
 *_memset - set all values in the allocated memory to zero
 *@s:allocated memory
 *@b: character to be filled with
 *@n: size of the allocated memory
 *Return: pointer to the allocated memory
 *
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
/**
 *_calloc - allocates memory for an array
 *@nmemb: number of elements in the array
 *@size: number of bytes for each element
 *Return: pointer
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(size * nmemb);
	if (m == 0)
		return (NULL);
	m = _memset(m, 0, size * nmemb);
	return (m);
}
