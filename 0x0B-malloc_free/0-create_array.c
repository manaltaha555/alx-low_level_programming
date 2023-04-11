#include"main.h"
#include<stdlib.h>
/**
 *create_array - create an array of characters
 *@size: size of the array
 *@c: character to oobe initialized
 *Return: pointer
 *
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size--)
		n[size] = c;
	return (n);
}
