#include "main.h"
#include <stdlib.h>
/**
 *binary_to_uint - converts a binary number to an unsigned inteer
 *@b: pointer to the string of 0 and 1
 *Return: 0 or the unsigned int
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j = 0, count1 = 0, size = 0, count2 = 0, num = 0;

	if (!b)
		return (0);
	while (b[size])
	{
		size++;
	}
	for (i = 0; i < size; i++)
	{
		if (b[i] < 'a' || b[i] > 'z')
		{
			break;
		}
		j++;
		count1++;
		if (count1 >= 2 || count2 == 1)
		{
			return (0);
		}
	}
	for (j = size - 1, i = 0; j >= 0; j--, i++)
	{
		if (b[j] == 'b')
			continue;
		num += (b[j] - '0') * (1 << i);
	}
	return (num);
}
