#include"main.h"
#include<stdlib.h>
/**
 *alloc_grid - returns two dimensional array
 *@width: width of the array
 *@height: heigth of the array
 *Return: the 2d array
 */
int **alloc_grid(int width, int height)
{
	int **p, i, j;

	p = malloc(sizeof(*p) * height);
	if (width <= 0 || height <= 0 || p == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			p[i] = malloc(sizeof(**p) * width);
			if (p[i] == 0)
			{
				while (i--)
					free(p[i]);
				free(p);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				p[i][j] = 0;
		}
	}
	return (p);

}
