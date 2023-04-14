#include"main.h"
#include<stdlib.h>
/**
 *array_range -  creates an array of integers
 *@min: minimum number in the array
 *@max: maximum number in the array
 *Return: pointefr to an integer array
 *
 */
int *array_range(int min, int max)
{
	int *m;
	int i, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	m = malloc( sizeof(int) * len);
	if (!m)
		return (NULL);
	for (i = 0; i < len; i++)
		m[i] = min++;
	return (m);
}
