#include<stdio.h>
#include"main.h"
/**
 *print_array - prints n elements of an array
 *@a: array of an integer
 *@n: size of the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
		{
			break;
		}
		printf(",");
		printf(" ");
	}
	printf("\n");
}
