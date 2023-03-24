#include"main.h"
/**
 *print_diagonal - draws a diagonal line on the terminal
 *@n: number of times
 *Return: void
 *
 */
void print_diagonal(int n)
{
	int i = 1, j;

	if (n <= 0)
	{
		_putchar(' ');
		_putchar('\n');
	}
	else
	{
		for (j = 1 ; j <= n; j++)/*lines*/
		{
		while(i <= n)
		{
			_putchar(' ');
			i++;
		}
		_putchar(92);
		_putchar('\n');
		}
	}
}
