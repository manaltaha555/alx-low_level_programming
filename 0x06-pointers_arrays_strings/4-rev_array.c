#include"main.h"
/**
 *reverse_array - reverse the content of an array of integers
 *@a: the array
 *@n: number of the elements in the array
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
