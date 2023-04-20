#include"function_pointers.h"
#include<stdlib.h>
#include<stddef.h>
/**
 *array_iterator - iterate an array
 *@size: size of the array
 *@action: pointer to a function
 *@array: the array of strings
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action && array && size)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
