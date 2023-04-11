#include"main.h"
#include<stdlib.h>
/**
 *free_grid - function free two diension array
 *@grid: the two dimension array
 *@height: the heigth of the array
 *Return: void
 *
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
