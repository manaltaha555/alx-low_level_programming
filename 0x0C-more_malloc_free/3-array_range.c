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
	int i;

	if (min > max)
		return (NULL);
	m = malloc((max - min + 1) * sizeof(int));
	if (!m)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
		m[i] = min++;
	return (m);
}
