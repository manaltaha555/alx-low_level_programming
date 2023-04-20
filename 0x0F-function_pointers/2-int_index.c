#include"function_pointers.h"
#include<stdlib.h>
/**
 *int_index - return the index of element in the array
 *@array: the array of numbers
 *@size: the size of the array
 *@cmp: pointer to the function that return a specific elements
 *Return: index of the element or -1 if doesn't found
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && size && cmp)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
