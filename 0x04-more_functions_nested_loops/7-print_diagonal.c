#include"main.h"
/**
 *print_diagonal - draws a diagonal line on the terminal
 *@n: number of times
 *Return: void
 *
 */
void print_diagonal(int n)
{
	int space, postn;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (postn = 1 ; postn <= n; postn++)/*lines*/
		{
			for (space = 1; space <= postn; space++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
		}
	}
}
