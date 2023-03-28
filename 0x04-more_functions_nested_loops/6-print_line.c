#include"main.h"
/**
 *print_line - draws a straight line in the terminal
 *@n: number of times to repeat _ character
 * Return: void
 *
 *
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}