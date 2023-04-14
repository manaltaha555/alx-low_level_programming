#include"main.h"
#include<stdlib.h>
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
	ptr = malloc(nmemb * size);
	return (ptr);
}
