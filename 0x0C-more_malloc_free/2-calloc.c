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
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
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
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(sizeof(int) * nmemb);
	if (ptr == 0)
		return (NULL);
	_memset(ptr, 0, sizeof(int) * nmemb);
	return (ptr);
}
